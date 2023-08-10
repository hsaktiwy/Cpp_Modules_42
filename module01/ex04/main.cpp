#include "fileshifting.hpp"
#include <iostream>
#include <limits>

void	Get_string(std::string &str, std::string message)
{
	std::cout << message;
	std::getline(std::cin, str);
	if (std::cin.eof() || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (std::cin.eof())
			std::cout << std::endl << "You ended the file with EOF ???" << std::endl;
		else if (std::cin.fail())
			std::cout << std::endl << "Something went wrong with the input stream" << std::endl;
		std::exit(0); 
	}
}

int main()
{
	std::string file, needle, newstring;
	while (true)
	{
		Get_string(file ,  "Enter the filename: ");
		Get_string(needle, "Enter the String to replace (S1): ");
		Get_string( newstring, "Enter the replacement string (S2): ");
		if (file.compare("stop") == 0 && needle.compare("stop") == 0 && newstring.compare("stop") == 0)
			break;
		std::cout << file << " " << needle << " " << newstring << std::endl; 
		fileshifting op = fileshifting(file, needle, newstring);
		if (!op.shiftReplace())
			std::cout << "Something went wrong!!!(make sure you have no empty filename , or read permission for the filename, existence ...)\n";
	}
	return (0);
}