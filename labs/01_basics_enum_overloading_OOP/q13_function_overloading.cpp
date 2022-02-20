// WAP to fund the area of a square, rectangle and triangle using function
// overloading without using class.

#include <iostream>
using namespace std;

int Area(int side) {  // area of square
  return side * side;
}

int Area(int length, int breadth) {  // area of rectangle
  return length * breadth;
}

float Area(float radius) {  // area of circle
  return 3.14159 * radius * radius;
}

int main() {
  int s = 3, l = 2, b = 3;
  float r = 1.5;

  cout << "Area of square: " << Area(s) << endl;
  cout << "Area of rectangle: " << Area(l, b) << endl;
  cout << "Area of circle: " << Area(r) << endl;
  return 0;
}

/** OUTPUT:

Area of square: 9
Area of rectangle: 6
Area of circle: 7.06858

*/
