#include <iomanip>
#include <iostream>

int main()
{
	std::string str1 = "Hello world";
	std::string str2 = "test";

	std::cout << std::left << std::setw(10);
	std::cout << str1;
	return 0;
}