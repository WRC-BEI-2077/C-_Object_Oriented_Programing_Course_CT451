// WAP to demonstrate enum

#include <iostream>
using namespace std;

#define space ' '

enum Seasons { Spring, Summer, Autumn, Winter };

int main() {
  // Using enumeration
  Seasons s;

  s = Winter;
  cout << "Winter: " << s << endl;

  // Checking value of each enum element
  cout << "Seasonal values for Spring, Summer, Autumn, Winter respectively: ";

  cout << Spring << space << Summer << space << Autumn << space << Winter
       << endl;

  return 0;
}
