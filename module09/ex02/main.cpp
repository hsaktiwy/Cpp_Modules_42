#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if (argc != 1)
    {
        try
        {
            PmergeMe obj = PmergeMe(argv + 1);
            // obj.FJAOnVector();
            obj.run();
        } catch(std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout << "Enter some arguments" << std::endl;
    return (0);
}