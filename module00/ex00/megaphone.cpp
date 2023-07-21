#include <iostream>
#include <cctype>

void	print_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << (char)std::toupper(str[i]);
		else
			std::cout << str[i];
		i++;
	}
}

int main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < argc)
	{
		print_toupper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}