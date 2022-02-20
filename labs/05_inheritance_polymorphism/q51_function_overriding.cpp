// WAP to illustrate the concept of function overriding.

#include <iostream>

using namespace std;

class Base {
    public:
    void print() {
        cout << "Base member function." << endl;
    }
};

class Derived: public Base {
    public:
    void print() {
        cout << "Derived member function." << endl;
    }
};

int main() {
    Derived d1;

    d1.print();
    d1.Base::print();
    return 0;
}

/** OUTPUT:

Derived member function.
Base member function.

*/
