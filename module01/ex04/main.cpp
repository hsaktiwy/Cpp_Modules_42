#include "fileshifting.hpp"
#include <iostream>
int main()
{
	std::string file, needle, newstring;
	while (true)
	{
		std::cout << "Enter the filename , needle , and the newstring (to stop enter stop 3 times):";
		std::cin >> file >> needle >> newstring;
		if (file.compare("stop") == 0 && needle.compare("stop") == 0 && newstring.compare("stop") == 0)
			break;
		std::cout << file << " " << needle << " " << newstring << std::endl; 
		fileshifting op = fileshifting(file, needle, newstring);
		if (!op.shiftReplace())
			std::cout << "Something went wrong!!!(make sure you have no empty filename , or read permission for the filename, existence ...)\n";
	}
	return (0);
}