#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

void	cin_protection()
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

int main()
{
	PhoneBook ContactsBook;
	std::string command;
	std::cout << "Welcome to our PhoneBook service  : (Plz write ADD: to add a contact, SEARCH: to search for one, EXIT: to stop the programme)\n";
	while (true)
	{
		std::cout << "Enter your Command : ";
		if (!(std::cin >> command))
			cin_protection();
		else
		{
			if (command.compare("ADD") == 0)
				ContactsBook.addContact();
			else if (command.compare("SEARCH") == 0)
			{
				int index;
				std::cout << "Enter the index of the contact you want : ";
				if (!(std::cin >> index))
					cin_protection();
				else
					ContactsBook.searchContact(index);
			}
			else if (command.compare("EXIT") == 0)
				return (0);
			else
				std::cout << "This is not a valide Command (ADD, SEARCH, EXIT)\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} 
	return (0);
}