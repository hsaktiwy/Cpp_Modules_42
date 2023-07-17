#include "PhoneBook.hpp"
#include <iomanip>

static void display_helper(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 8) << ".";
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
	std::cout << "Thx for your interst in our service plus lucky for you u lst all your info\n";
}

void	PhoneBook::addContact()
{
	Contact contact;
	contact.setData();
	contacts[oldes] = contact;
	if (oldes == 7)
		oldes = 0;
	else
		oldes++;
}

void	PhoneBook::searchContact(int index)
{
	if (index < 1 || index > 8)
		std::cout << "Pls Enter a correct index ( in the following range [1, 8])\n";
	else
	{
		display_contact(contacts[index - 1], index);
	}
}

