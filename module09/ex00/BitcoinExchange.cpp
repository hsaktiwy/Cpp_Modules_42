#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

static void AddToNode(std::string &seperator,std::string& line, std::map<std::string , float> &map)
{
    size_t pos = line.find(seperator);
    if (pos != std::string::npos)
    {
        std::string date = line.substr(0, pos);
        std::string v = line.substr(pos + seperator.size(), line.size());
        float       value = static_cast<float>(std::atof(v.c_str()));

        map.insert(std::make_pair(date, value));
    }
}

static void DefineSeperator(std::string &str, std::string &line)
{
    int i = 0;
    int s1,s2;

    while (std::isalpha(line[i]))
        i++;
    s1 = i;
    while (!std::isalpha(line[i]))
        i++;
    s2 = i;
    // std::cout << s1 << " " << s2 << " " << std::endl; 
    str = line.substr(s1, s2 - s1);
}

static void InitializeData(std::ifstream &file, std::map<std::string , float> &map)
{
    std::string seperator;
    std::string line;

    // std::cout << "file created" << std::endl;
    if (file.is_open())
    {
        // std::cout << "file opened" << std::endl;
        std::getline(file, line);
        if (line.size() != 0)
        {
            // std::cout << "In the game" << std::endl;
            // define the seperator first.
            DefineSeperator(seperator, line);
            // std::cout << "data seperator" << seperator << std::endl;
            while (std::getline(file, line))
            {
                AddToNode(seperator, line, map);
            }
        }
        file.close();
    }
    else
        throw BitcoinExchange::FilesException();
} 
// static void display(std::map<std::string, float> &data)
// {
//     for(std::map<std::string, float>::iterator it = data.begin(); it != data.end(); it++)
//     {
//         std::cout << it->first << " " << it->second << std::endl;
//     }
// }

BitcoinExchange::BitcoinExchange(const std::string &filename) : FileDataName("data.csv"), InputFileName(filename)
{
    FileData.open(FileDataName);
    InitializeData(FileData, data);
    // display(data);
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& obj)
{
    if (this != &obj)
    {
        FileDataName = obj.FileDataName;
        data = obj.data;
    }
    return (*this);
}

static bool CheckDate(std::string &date)
{
    std::string year, mon, day;
    int y, m, d;
    bool leap;
    // YEAR-MONTHS-DAY YEARS  4+2+2+2 = 8
    if (date.size() == 10 && date.at(4) == '-' && date.at(7) == '-')
    {
        year = date.substr(0, 4);
        mon = date.substr(5, 2);
        day = date.substr(8, 2);
        // std::cout << year << " "  << mon << " " << day << std::endl;
        // check if the string is made from a 4 digit number and that they are between 2009 and 2023
        y = std::atoi(year.c_str());
        m = std::atoi(mon.c_str());
        d = std::atoi(day.c_str());
        // check the number's validity in general
        // std::cout << y << " " << m << " " << d << std::endl;
        if (!(y >= 2009) || !(m >= 1 && m <= 12) || !(d >= 1 && d <= 31))
            return (false);
        // I think our year will be counted as valid for now
        // let check if our year is a leap one, first check if the year is divisible by 4 and if divisible by 100 or 400 else its not
        leap = (y % 4 == 0 && ((y % 100 != 0) || (y % 400 == 0))) ? true : false;
        // check days validity
        int t30[7] = {4, 6, 9, 11};
        for (int i = 0; i < 4; i++)
        {
            if (t30[i] == m)
            {
                if (!(d >= 1 && d <= 30))
                    return (false);
            }
        }
        // days in the months , plus check if there is a leap year for the month 2
        if (m == 2 && ((!leap && d > 28) || (leap && d > 29)))
            return (false);

    }
    else
        return (false);
    return (true);
}

static void run_helper(std::string &seperator,std::string& line, std::map<std::string , float> &map)
{
    size_t  pos = line.find(seperator);
    bool    error =  false;
    if (pos != std::string::npos)
    {
        std::string date = line.substr(0, pos);
        std::string v = line.substr(pos + seperator.size(), line.size());
        float       value = static_cast<float>(std::atof(v.c_str()));
        // check date validity
        if (!CheckDate(date))
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            error = true;
        }
        // check value bounder [0, 1000]
        if(!error && value < 0)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            error = true;
        }
        if (!error && value > 1000)
        {
            std::cerr << "Error: too large a number." << std::endl;
            error = true;
        }
        // search for the data using lower_bound that will return a iterator that has the first
        // value == to the date or greater date then the one we want (cause no date as our founded),
        // else the end in both case we will iterate back to the on before
        if (!error)
        {
            std::map<std::string, float>::iterator needle = map.lower_bound(date);
            if (needle == map.end() || needle->first != date)
            {
                // what if we had only one element and is the one that is biger then our data
                if (needle != map.begin())
                {
                    --needle;
                }
            }
            std::cout << date << " => " << value << " = " << (value * needle->second) << std::endl;
        }
    }
    else
    {
        std::string date = line;
        if (!CheckDate(date))
            std::cerr << "Error: bad input => " << date << std::endl;
        // ????????
    }
}

void    BitcoinExchange::run( void )
{
    InputFile.open(InputFileName);
    std::string seperator;
    std::string line;

    if (InputFile.is_open())
    {
        // std::cout << "file opened" << std::endl;
        std::getline(InputFile, line);
        if (line.size() != 0)
        {
            // std::cout << "In the game" << std::endl;
            // define the seperator first.
            DefineSeperator(seperator, line);
            // std::cout << "data seperator" << seperator << std::endl;
            while (std::getline(InputFile, line))
            {
                run_helper(seperator, line, data);
            }
        }
        InputFile.close();
    }
    else
        throw BitcoinExchange::FilesException();
}


const char *BitcoinExchange::FilesException::what() const throw(){
    return ("Error check if the file exist or if it has the right permission");
}