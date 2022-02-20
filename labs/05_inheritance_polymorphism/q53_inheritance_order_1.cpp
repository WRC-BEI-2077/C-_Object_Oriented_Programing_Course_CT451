#include<iostream>
using namespace std;
  
class A { // base class
  public:
    A()  { cout << "A's constructor called" << endl; }
    ~A() { cout << "A's destructor called" << endl; }
};
  
class B: public A { // note the order
  public:
    B()  { cout << "B's constructor called" << endl; }
    ~B() { cout << "B's destructor called" << endl; }
};
  
  
int main() {
  B b;
  return 0;
}

/** OUTPUT:

A's constructor called
B's constructor called
B's destructor called
A's destructor called

*/
