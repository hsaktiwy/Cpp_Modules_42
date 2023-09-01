#include "test.hpp"
#include <iostream>
#include<iostream>
using namespace std;
 
class A{
  public:
    virtual void display() = 0;
    virtual ~A(){std::cout << "GoodbyeA\n";};
};

class B : public  A{
  public:
    void display(){ std::cout << "B\n";};
      ~B(){std::cout << "GoodbyeB\n";};
};

int main()
{
	A *a = new B();
  a->display();
  delete a;
  return 0;
}