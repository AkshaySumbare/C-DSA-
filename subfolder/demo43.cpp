#include <iostream>
using namespace std;

//************Initialization list in Constructors**********
// initialization is nothing but way of give value to the members of class
/*
 Syntax for initialzation list in constructor
  constructor (argument-list) : initialization-section
  {
    //assignment + other code;
  }

*/

// class Test
// {
//     int a;
//     int b;

// public:
//     // Test(int i,int j): a(i), b(j)     //run
//     // Test(int i,int j): a(i), b(i+j)   //run
//     // Test(int i,int j): a(i), b(2*j)   //run
//     // Test(int i,int j): a(i), b(a +j)  // run
//     Test(int i, int j) : b(j), a(i + b) // run but show gaebage value of a becz order of 
//      //                                   execution here int a is above int b initialize first.
//     {                                   // if we want to execute values of i and j in a and b
//         cout << "Cnstructor is executed " << endl;
//         cout << " Value of a is  " << a << endl;
//         cout << " Value of b is  " << b << endl;
//     }
// };
// int main()
// {
//     Test t(4, 8);

//     return 0;
// }