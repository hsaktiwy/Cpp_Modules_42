#include "Contact.hpp"
#include <cstdlib>

static void get_info(std::string& block, const char *entry_wanted)
{
	int stop;

	stop =  0;
	while (!stop)
	{
		std::cout << "Enter the " << entry_wanted << " : ";
		if (!(std::cin >> block))
		{
			if (std::cin.eof())
			{
				std::cout << "\nError plz, avoid entering EOF" << std::endl;
				std::exit(0);
			}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "try again (input is not accepted)!!" << std::endl;
		}
		else
			stop++;
	}
}

Contact::Contact()
{
	std::cout << "Created contact\n";
}

Contact::~Contact()
{
	std::cout << "end of all\n";
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

void Contact::setData()
{
	// gader all the info to craet our contact object
	get_info(FirstName, "first name");
	get_info(LastName, "last name");
	get_info(NickName, "nick name");
	get_info(PhoneNumber, "phone number");
	get_info(DarkestSecret, "darkes secret");
}