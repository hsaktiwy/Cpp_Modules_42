#include "Contact.hpp"
#include <cstdlib>

static int getPrompt(std::string& block)
{
	std::getline(std::cin, block);
	if (std::cin.eof())
	{
		std::exit(0);
	}
	if (block.length() == 0)
		return (0);
	return 1;
}

static void get_info(std::string& block, const char *entry_wanted)
{
	while (true)
	{
		std::cout << "Enter the " << entry_wanted << " : ";
		if (!getPrompt(block))
			std::cout << "Try again (input is not accepted)!!" << std::endl;
		else
			break ;
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
	get_info(FirstName, "first name");
	get_info(LastName, "last name");
	get_info(NickName, "nick name");
	get_info(PhoneNumber, "phone number");
	get_info(DarkestSecret, "darkes secret");
}