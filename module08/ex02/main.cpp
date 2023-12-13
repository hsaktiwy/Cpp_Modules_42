#include "MutantStack.hpp"
#include <iostream>
int main()
{
    MutantStack<int> stack;
    stack.push(1);
    stack.push(3);
    stack.push(4);
    int i = 0;
    for(MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        std::cout << (*it)++ << std::endl;
    }
    for(MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
    {
        std::cout << (*it)++ << std::endl;
    }
    return 0;
}