#include <cmath>
#include <iostream>
#define PI 3.141592653589
int main()
{
    int x  = 245;
    x += cos(PI/2) * 4;
    std::cout << x  << " " << (cos(PI / 2) * 4) << std::endl;
    return (0);
}