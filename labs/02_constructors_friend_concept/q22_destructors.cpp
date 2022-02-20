#include <iostream>

using namespace std;

class Random {
    public:
    Random() {
        cout << "A constructor is called." << endl;
    }

    ~Random() {
        cout << "A destructor is called." << endl;
    }
};

int main() {
    Random r1, r2;

    return 0;
}

/** OUTPUT:

A constructor is called.
A constructor is called.
A destructor is called.
A destructor is called.

*/