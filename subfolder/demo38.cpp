#include <iostream>
using namespace std;
//***********Multiple inheritance in c++*********
// in ths type from ore than one class made one single one ie. A - B
//                                                                C
// Syntax for inheriting in multiple inheritance
/*
//  class DerivedC: visibility-mode base1,visibility-mode base2
//  {
//   class boy of class "DerivedC"
//  };
//  */

// class Base1
// {
// protected:
//     int base1int;

// public:
//     void set_base1int(int a)
//     {
//         base1int = a;
//     }
// };
// class Base2
// {
// protected:
//     int base2int;

// public:
//     void set_base2int(int a)
//     {
//         base2int = a;
//     }
// };
// class Derived : public Base1, public Base2 // we can add more base class depends on our will
// {
// public:
//     void show()
//     {
//         cout << "The value of Base1 is " << base1int << endl;
//         cout << "The value of Base2 is " << base2int << endl;
//         cout << "The value of these values is " << base1int + base2int << endl;
//     }
// };
// /*
//  The inherited derived class will look something like this:
//  Data members:
//       base1int ---> protected
//       base2int ---> protected
//  Member functions:
//      set_base1int() ---> public
//      set_base2int() ---> public
//      set_show() ---> public
//   */
// int main()
// {
//     Derived Akshay;
//     Akshay.set_base1int(23);
//     Akshay.set_base2int(26);
//     Akshay.show();
//     return 0;
// }