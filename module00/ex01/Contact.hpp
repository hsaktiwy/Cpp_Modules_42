#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <limits>
// class Definition

class Contact{

	private:
		std::string	FirstName;
		std::string	LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	public:
		Contact();
		~Contact();
		void setData();
		std::string getLastName();
		std::string getFirstName();
		std::string getNickName();
		std::string getPhoneNumber();
		std::string getDarkestSecret();
};

#endif