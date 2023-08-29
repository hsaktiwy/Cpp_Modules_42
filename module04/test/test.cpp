#include "test.hpp"
#include <iostream>
#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
	A(){cout << "A constructor\n";}
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  public A
{
public:
  B()  { cout << "B constructor\n"; setX(10); }
};
 
class C:  public A 
{
public:
  C()  { cout << "C constructor\n"; setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
	A a;
	B b;
	C c;
	cout << "size of a = "<< sizeof(A) << ",b =" << sizeof(B) << ",c =" << sizeof(C) << std::endl;
    D d;
    // d.B::print();
    return 0;
}