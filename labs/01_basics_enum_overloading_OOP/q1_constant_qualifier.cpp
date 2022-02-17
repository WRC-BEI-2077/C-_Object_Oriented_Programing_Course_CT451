// WAP using constant qualifiers
#include <iostream>
using namespace std;

int main() {
  const float PI = 3.14159;
  float radius, area;

  cout << "Enter the radius of circle: ";
  cin >> radius;

  area = PI * radius * radius;

  cout << "It's area is: " << area;

  return 0;
}
