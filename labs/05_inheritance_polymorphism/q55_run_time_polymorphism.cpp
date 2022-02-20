#include <iostream>

using namespace std;

class SHAPE {
    protected:
    int value;

    public:
    SHAPE():value(0) {}
    SHAPE(int n): value(n) {}

    virtual void FindPerimeter() = 0; // pure virtual function
};

class SQUARE : public SHAPE {
    public:
    SQUARE():SHAPE(0) {}
    SQUARE(int n):SHAPE(n) {}

    void FindPerimeter() {
        cout << "Perimeter of square: " << (SHAPE::value * 4) << endl;
    }
};

class CIRCLE: public SHAPE {
    public:
    CIRCLE():SHAPE(0) {}
    CIRCLE(int n):SHAPE(n) {}

    void FindPerimeter() {
        cout << "Perimeter of circle: " << (SHAPE::value * 2 * 3.14159) << endl;
    }
};

int main() {
    SHAPE* sp;
    SQUARE s(5);
    CIRCLE c(10);

    sp = &s;
    sp -> FindPerimeter(); // late binding
    sp = &c;
    sp -> FindPerimeter();

    return 0;
}

/** OUTPUT:

Perimeter of square: 20
Perimeter of circle: 62.8318

*/
