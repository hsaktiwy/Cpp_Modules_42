#include "Array.hpp"
#define MAX_VAL 750
void    leaks()
{
    system("leaks a.out");
}

int main()
{
    atexit(leaks);
    {
        Array<int> arr(10);
        for (unsigned int i = 0; i < arr.size(); i++)
        {
            try
            {
                arr[i] = i;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
        
        }
        for (unsigned int i = 0; i < arr.size() * 2; i++)
        {
            try
            {
                std::cout << arr[i] << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            } 
        }
    }
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (unsigned int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
            int correct = 1;
            for(unsigned int i = 0; i < numbers.size(); i++)
            {
                try
                {
                    if (!(numbers[i] == tmp[i] && tmp[i] == test[i]))
                        correct = 0;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                    break;
                }
            }
            if (correct)
            {
                std::cout << "correct" << std::endl;
            }
            else
                std::cout << "Not correct" << std::endl;
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!! "  << i << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
        return 0;
    }
}