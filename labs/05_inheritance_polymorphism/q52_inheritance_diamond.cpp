#include <iostream>
#include <string>

using namespace std;

class Student {
    protected:
    string student;
    int roll;

    public:
    Student():student("") {}
    Student(string s):student(s) {}

    void sget() {
        cout << "Enter name of student: ";
        cin >> student;
        cout << "Enter the roll number: ";
        cin >> roll;
    }

    void sdisplay() {
        cout << "Name: " << student << endl;
        cout << "Roll: " << roll << endl;
    }
};

class Test: virtual public Student {
    protected:
    string name;

    public:
    Test():name("") {}
    Test(string n):name(n) {}

    void tget() {
        cout << "Enter name of test: ";
        cin >> name;
    }
    void tdisplay() {
        cout << "Test: " << name << endl;
    }

};

class Sports: virtual public Student {
    protected:
    long int price;

    public:
    Sports():price(0) {}
    Sports(int p): price(p) {}

    void ssget() {
        cout << "Enter sports price: ";
        cin >> price;
    }
    void ssdisplay() {
        cout << "Sports price: " << price << endl;
    }
};

class Result: public Test, Sports {
    protected:
    long int fee;

    public:
    Result():fee(0) {}

    void rget() {
        Student::sget();
        Test::tget();
        Sports::ssget();

        cout << "Enter the fees: ";
        cin >> fee;
    }

    void rdisplay() {
        Student::sdisplay();
        Test::tdisplay();
        Sports::ssdisplay();

        cout << "Fees: " << fee << endl;
    }
};

int main() {

    Result r1;
    cout << "Taking data: " << endl;
    r1.rget();
    cout << endl << "Rendering data: " << endl;
    r1.rdisplay();

    return 0;
}

/** OUTPUT:

Taking data:
Enter name of student: MasterChief
Enter the roll number: 1
Enter name of test: GRE
Enter sports price: 12451
Enter the fees: 45234

Rendering data:
Name: MasterChief
Roll: 1
Test: GRE
Sports price: 12451
Fees: 45234

*/
