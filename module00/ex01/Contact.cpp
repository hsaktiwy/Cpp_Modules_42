#include "Contact.hpp"
#include <cstdlib>

static int isPhoneNumber(std::string &str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

static int getPrompt(std::string& block, int (*function)(std::string&))
{
	std::getline(std::cin, block);
	if (std::cin.eof())
	{
		std::exit(0);
	}
	if (block.length() == 0)
		return (0);
	if (function != NULL)
	{
		if (!function(block))
			return (0);
	}
	return 1;
}

static void get_info(std::string& block, const char *entry_wanted, int checkPhoneNumber)
{
	while (true)
	{
		std::cout << "Enter the " << entry_wanted << " : ";
		if (!checkPhoneNumber)
		{
			if (!getPrompt(block, NULL))
				std::cout << "Try again (input is not accepted)!!" << std::endl;
			else
				break ;
		}
		else
		{
			if (!getPrompt(block, isPhoneNumber))
				std::cout << "Try again (input is not accepted)!!" << std::endl;
			else
				break ;
		}
	}
}

Contact::Contact()
{
	// std::cout << "Created contact\n";
}

Contact::~Contact()
{
	// std::cout << "End of a Contact\n";
}

std::string Contact::getNickName()
{
	return (NickName);
}

std::string Contact::getFirstName()
{
	return (FirstName);
}
std::string Contact::getLastName()
{
	return (LastName);
}

std::string Contact::getPhoneNumber()
{
	return(PhoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return(DarkestSecret);
}

void Contact::setData()
{
	// gader all the info to craet our contact object
	get_info(FirstName, "first name", 0);
	get_info(LastName, "last name", 0);
	get_info(NickName, "nick name", 0);
	get_info(PhoneNumber, "phone number", 1);
	get_info(DarkestSecret, "darkes secret", 0);
}