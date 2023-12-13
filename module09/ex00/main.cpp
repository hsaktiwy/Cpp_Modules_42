#include "BitcoinExchange.hpp"


int main(int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            BitcoinExchange btc = BitcoinExchange(argv[1]);
            btc.run();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    else
        std::cerr << "Error: could not open file." << std::endl;
    return 0;
}