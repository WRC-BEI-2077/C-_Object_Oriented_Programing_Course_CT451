#include <iostream>
#include <string>

using namespace std;

template<class T>
void Swap(T &x, T &y) {
    T temp;

    temp = x; // classic swapping technique using swap variable
    x = y;
    y = temp;
}

int main() {
    int x = 2, y = 3;
    float a = 3.45, b = 4.56;
    string s1 = "John", s2 = "Doe";

    cout << "Before swap:" << endl;
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << s1 << " " << s2 << endl;

    Swap(x, y);
    Swap(a, b);
    Swap(s1, s2);

    cout << endl << "After swap:" << endl;
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
    cout << s1 << " " << s2 << endl;

    return 0;
}

/*** OUTPUT:

Before swap:
2 3
3.45 4.56
John Doe

After swap:
3 2
4.56 3.45

*/