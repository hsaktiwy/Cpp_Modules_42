#include "test.hpp"
#include <iostream>
#include<iostream>
using namespace std;
 
class A{
  private:
    int fixed;
  public:
    A(int _x
    {
      fixed = _x << 8;
    }
    void display()
    {
      cout << "x = " << x << " y = " << z << endl;
    }
};

int main()
{
	A a(1,1);
  A b(2,2);

  a.display();
  b.display();
  b = a;
  b.display();
    return 0;
}