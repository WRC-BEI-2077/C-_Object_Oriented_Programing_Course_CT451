// Repeat program 3, using concept of class & objects.

#include <iostream>
using namespace std;

class Area {
 private:
  int a, b;
  float r;

 public:
  int getArea(int a) {  // square
    return a * a;
  }

  int getArea(int a, int b) {  // rectangle
    return a * b;
  }

  float getArea(float r) {  // circle
    return 3.14159 * r * r;
  }
};

int main(int argc, char const* argv[]) {
  int s = 3, l = 2, b = 3;
  float r = 1.5;

  Area* a = new Area();

  cout << "Area of square: " << a->getArea(s) << endl;
  cout << "Area of rectangle: " << a->getArea(l, b) << endl;
  cout << "Area of circle: " << a->getArea(r) << endl;

  delete a;

  return 0;
}
