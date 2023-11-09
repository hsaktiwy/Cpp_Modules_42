#include "ScalarConvertion.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        try
        {
            ScalarConvertion::Convert(argv[1]);
        }
        catch(std::exception &e)
        {
            std::cerr << "Error : " << e.what() << std::endl;
        }
    }
    else
        std::cerr << "Invalide Number of argument!!!" << std::endl;
    return (0);
}