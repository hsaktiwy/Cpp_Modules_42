#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            RPN rpn = RPN(argv[1]);
            rpn.run();
        }
        catch(std::exception &e)
        {
            std::cout << e.what() << std::endl; 
        }
    }
    else
        std::cout << "Invalide Number of arguments" << std::endl;
    return 0;
}
