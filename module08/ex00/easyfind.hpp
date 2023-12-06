#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>
#include <iostream>
#include <algorithm>

template <typename T> void  easyfind(T &container, int value)
{

    if (std::find(container.begin(), container.end(), value) != container.end())
            std::cout << "Element Founded\n" << std::endl;
    else
        throw std::logic_error("No occurrence founded");
}

#endif