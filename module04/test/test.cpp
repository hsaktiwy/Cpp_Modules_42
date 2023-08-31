#include "test.hpp"
#include <iostream>
#include<iostream>
using namespace std;
 
class A{
  public:
    virtual void display(){cout << "A\n";}
};

class B : public  A{
  public:
    void display(){cout << "B\n";};
};

int main()
{
	A *a = new B();
  a->display();
    return 0;
}