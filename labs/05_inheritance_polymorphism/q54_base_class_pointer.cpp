#include <iostream>

using namespace std;

class Base {
    public:
    void show() {
        cout << "Base" << endl;
    }
};

class Derv1: public Base {
    public:
    void show() {
        cout << "Derv1" << endl;
    }
};

class Derv2: public Base  {
    public:
    void show() {
        cout << "Derv2" << endl;
    }
};

int main() {
    Derv1 dv1;
    Derv2 dv2;

    Base* ptr; // base class pointer

    ptr = &dv1;
    ptr -> show(); // early binding

    ptr = &dv2;
    ptr -> show();

    return 0;
}

/** OUTPUT:

Base
Base

*/
