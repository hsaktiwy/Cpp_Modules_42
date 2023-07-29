#include "PhoneBook.hpp"
#include <iomanip>

static void display_helper(std::string str)
{
	if (str.length() > 10)
	{
		std::string substr = str.substr(0, 9);
		std::cout << substr << ".";
	}
	else
		std::cout << std::setw(10) << str;
}

static void display_contact(Contact& contact, int index)
{
	// index
	std::cout << std::setw(10) << index;
	std::cout << '|';
	// name
	display_helper(contact.getFirstName());
	std::cout << '|';
	display_helper(contact.getLastName());
	std::cout << '|';
	display_helper(contact.getNickName());
	std::cout << std::endl;
}

PhoneBook::PhoneBook()
{
	oldes = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact()
{
	contacts[oldes].setData();
	if (oldes == 7)
		oldes = 0;
	else
		oldes++;
}

int	PhoneBook::searchContact(int index)
{
	if (index <= 8)
	{
		if (contacts[i - 1].empty())// u wher searching for empty detection function

	}
	else
		return (0)
}

void PhoneBook::displayPhoneBook(void)
{
	int i;

	i = -1;
	std::cout << " Index    | Name     | LastName | NickName \n";
	std::cout << "-------------------------------------------\n";
	while (++i < 8)
	{
		if (contacts[i].getFirstName().length())
			display_contact(contacts[i], i + 1);
	}
}

