#include "Serializer.hpp"

int main()
{
	{
		Data s = {10, 12, 13};
		Data *tmp;
		std::cout << &s << std::endl;
		uintptr_t i = Serializer::serialize(&s);
		std::cout << i << std::endl;
		tmp = Serializer::deserialize(i);
		tmp =reinterpret_cast<Data *>(i);
		std::cout << tmp << std::endl;
		std::cout << tmp->data << std::endl;
		std::cout << tmp->data2 << std::endl;
		std::cout << tmp->finaly << std::endl;
		if (tmp == &s)
       		std::cout << "Serialization and Deserialization successful!" << std::endl;
    	else
        	std::cout << "Serialization and Deserialization failed!" << std::endl;
	}
}