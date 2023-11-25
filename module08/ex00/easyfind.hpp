#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>
#include <iostream>
class  ExceptionNotFound : public std::exception
{
    const char *what() const throw()
    {
        return ("No Occurrence was found");
    }
};
template <typename T> void  easyfind(T &container, int value)
{
    for(typename T::iterator it = container.begin(); it != container.end(); it++)
    {
        if (*it == value)
        {
            std::cout << "First occurrence founded : " << *it << std::endl;
            return ;
        }
    }
    throw ExceptionNotFound();
}

#endif