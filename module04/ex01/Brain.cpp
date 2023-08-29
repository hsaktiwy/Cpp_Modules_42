#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain(const Brain& tocopy)
{
	std::cout << "Brain Copy constructor" << std::endl;
	*this = tocopy; 
}

Brain::~Brain()
{
	std::cout << "Brain Default Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& obj)
{
	if(this != &obj)
	{
		for(int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (*this);
}
