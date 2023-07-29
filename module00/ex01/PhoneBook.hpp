#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
		int		oldes;
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void displayPhoneBook();
		int searchContact(int index);
};

#endif