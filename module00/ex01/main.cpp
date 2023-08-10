#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

static int getPrompt(std::string& block)
{
	std::getline(std::cin, block);
	if (std::cin.eof())
		std::exit(0);
	if (block.length() == 0)
		return (0);
	return 1;
}

static void searching(PhoneBook &ContactsBook)
{
	int	index;
	ContactsBook.displayPhoneBook();
	while (true)
	{
		std::cout << "Enter the index of the contact you want : ";
		if (!(std::cin >> index))
		{
			if (std::cin.eof())
				exit(0);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Something went wrong try again!!!\n";
		}
		else
		{
				if(!ContactsBook.searchContact(index))
				{
					std::cout << "Invalide index (" << index << "), try this range[1, 8]\n";
				}
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break ;
		}
	}
}

int main()
{
	PhoneBook ContactsBook;
	std::string command;
	std::cout << "Welcome to our PhoneBook service  : (Plz write ADD: to add a contact, SEARCH: to display contacts list and search for one, EXIT: to stop the programme)\n";
	while (true)
	{
		std::cout << "Enter your Command : ";
		if (getPrompt(command))
		{
			if (command.compare("ADD") == 0)
				ContactsBook.addContact();
			else if (command.compare("SEARCH") == 0)
				searching(ContactsBook);
			else if (command.compare("EXIT") == 0)
				return (0);
			else
				std::cout << "This is not a valide Command (ADD, SEARCH, EXIT)\n";
		}
	} 
	return (0);
}