
#include <iostream>
#include <string>

using namespace std;

// Class definition
class Customer {
 private:
  string customer_name, product_bought;
  int amount_paid, discount;

 public:
  Customer();
  ~Customer();

  void GetData();
  void Display();
};

Customer::Customer() {  // default constructor
  cout << "NEW CUSTOMER:" << endl;
  cout << "=============" << endl;
}

Customer::~Customer() {}  // destructor

void Customer::GetData() {  // method to take information
  cout << "Enter the customer's name: ";
  getline(cin, customer_name);  // line input
  cout << "Enter the product bought: ";
  getline(cin, product_bought);

  cout << "Enter the amount price: ";
  cin >> amount_paid;
  // giving 5% discount if the amount exceeds 20000
  if (amount_paid > 20000) {
    discount = (0.05 * amount_paid);
  }  // else leave the final price as it is
}

void Customer::Display() {  // method to display information
  cout << endl << "CUSTOMER BILLING DETAILS:" << endl;
  cout << "=========================" << endl;
  cout << "Name: " << customer_name << endl;
  cout << "Product bought: " << product_bought << endl;
  cout << "Amount paid: " << amount_paid << endl;
  cout << "Discount: " << discount << endl;
  cout << "Final price: " << (amount_paid - discount) << endl;
}

int main() {
  Customer c1;
  c1.GetData();
  c1.Display();

  return 0;
}

/** OUTPUT:

NEW CUSTOMER:
=============
Enter the customer's name: Bruno
Enter the product bought: Mars Chocolate Bar
Enter the amount price: 29000

CUSTOMER BILLING DETAILS:
=========================
Name: Bruno
Product bought: Mars Chocolate Bar
Amount paid: 29000
Discount: 1450
Final price: 27550

*/
