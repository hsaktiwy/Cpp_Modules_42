#include "Serializer.hpp"

int main()
{
	{
		Data s = {10};
		Data *tmp;
		std::cout << &s << std::endl;
		uintptr_t i = Serializer::serialize(&s);
		std::cout << i << std::endl;
		tmp = Serializer::deserialize(i);
		std::cout << tmp << std::endl;
		std::cout << tmp->data << std::endl;
		if (tmp == &s)
       		std::cout << "Serialization and Deserialization successful!" << std::endl;
    	else
        	std::cout << "Serialization and Deserialization failed!" << std::endl;
	}
	std::cout << "////////////////////////////////////////////////////////////" << std::endl;
	{
		Data *s = NULL;
		Data *tmp;
		std::cout << s << std::endl;
		uintptr_t i = Serializer::serialize(s);
		std::cout << i << std::endl;
		tmp = Serializer::deserialize(i);
		std::cout << tmp << std::endl;
		if (tmp == s)
       		std::cout << "Serialization and Deserialization successful!" << std::endl;
    	else
        	std::cout << "Serialization and Deserialization failed!" << std::endl;
	}
}