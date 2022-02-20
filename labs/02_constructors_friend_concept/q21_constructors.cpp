#include <iostream>

using namespace std;

class Box {
    private:
    int length, breadth, height;

    public:
    Box(): length(12), breadth(10), height(1) {}

    int volume() {
        return (length * breadth * height);
    }
};

int main() {
    Box b1;

    cout << "The volume of box: " << b1.volume() << endl;

    return 0;
}

/** OUTPUT:

The volume of box: 120

*/