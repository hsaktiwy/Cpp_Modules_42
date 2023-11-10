#include "iter.hpp"
#include <iostream>

template <typename T>
void    display(T a)
{
    std::cout << a << std::endl;
}

int main()
{
    int arr[5] = {10,30,29,19,20};
    std::string str[] = {"hamza", "mohamed", "khalile", "taha", "ilyasse", "ayoube"};
    float arr2[] = {1.4f, 4.65f, 7.65f};
    iter(arr, 5, display);
    iter(arr2, 3, display);
    iter(str, 6, display);
    return (0);
}