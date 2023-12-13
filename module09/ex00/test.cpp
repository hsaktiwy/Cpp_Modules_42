#include <iostream>

int main()
{
    int y = 0;

    while (y != -1)
    {
        std::cout << "Enter you year : ";
        std::cin >> y;
        int leap = (y % 4 == 0 && ((y % 100 != 0) || (y % 400 == 0))) ? true : false;
        if (leap)
            std::cout << "leapppppp" << std::endl;
        else
            std::cout << "nope at all" << std::endl;
    }

}
