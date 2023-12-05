#include "iter.hpp"
#include <iostream>

/*class Awsome{

public:
    Awsome(void): _n(42) {return;}
    int get(void)const {return this->_n;}
private:
    int _n;
};

std::ostream &operator<<(std::ostream &o, Awsome const &rhs) {o<<rhs.get(); return o;}

template <typename T>
void print(T const &x){std::cout << x << std::endl; return;}

template <typename T>
void    display(T a)
{
    std::cout << a << std::endl;
}
template <typename T>
T    plusplus(T& a)
{
    return (a++);
}*/

void    display(int a)
{
    std::cout << a << std::endl;
}
float    display_f(float a)
{
    std::cout << a << std::endl;
    return (0);
}
void    display_string(std::string &a)
{
    std::cout << a << std::endl;
}

int    plusplus(int& a)
{
    return (a++);
}

int main()
{
    int arr[5] = {10,30,29,19,20};
    std::string str[] = {"hamza", "mohamed", "khalile", "taha", "ilyasse", "ayoube"};
    float arr2[] = {1.4f, 4.65f, 4.65f};
    iter(arr, 5, display);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr, 5, plusplus);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr, 5, display);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr2, 3, display_f);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(str, 6, display_string);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    //////////////////////////
    /*iter(arr, 5, display<int>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr, 5, plusplus<int>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr, 5, display<int>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(arr2, 3, display<float>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(str, 6, display<std::string>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    int tab[] = {0,1,2,3,4};
    Awsome tab2[5];

    iter(tab, 5, print<int>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;
    iter(tab2, 5, print<Awsome>);
    std::cout << "////////////////////////////////////////////////////////////" << std::endl;*/
    return (0);
}
