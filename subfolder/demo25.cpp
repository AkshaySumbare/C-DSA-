#include <iostream>
using namespace std;
//***********constructor and destructor in c++*************
// whenever we create class at that time declared the value ie. setvalues, set numbers etc .ie automatically

class Complex
{
    int a, b, c, d;

public:
    // Creating a constructor
    // constructor is a special member function with same name as of the class .
    // it is used to initialize the objects of its class
    // it is automatically invoked whenever object is created
    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "your number is " << a << " +" << b << "i" << endl;
        cout << "your number is " << c << " +" << d << "i" << endl;
    }
};
Complex ::Complex(void)
{ // the name of cnstructor is must be as same as class name
    a = 10;
    b = 7;
    c = 8;
    d = 5;
}
int main()
{

    Complex c;
    c.printNumber();

    return 0;
}

/* Characteristics of the  constructors
  1. It should be declared in the public section of the class
  2. They are automatically invoked whenever the object is created
  3. do not have return values and they cant have return type
  4. we cant refers to their adress.

   */