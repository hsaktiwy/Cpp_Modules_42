#include "Contact.hpp"
#include <cstdlib>
int main()
{
	Contact c1 = Contact();
	std::cout << "info : " << c1.getFirstName() << std::endl << c1.getLastName() << std::endl << c1.getNickName() << std::endl; 
	return (0);
}