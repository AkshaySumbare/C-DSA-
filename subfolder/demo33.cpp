#include <iostream>
using namespace std;

//***********INHERITANCE IN C++************
//  reausability is a very important features of OOPs.
// in C++ we can reause a class and ad additional features in it
// Reausing classes saves times and money.
// forms of inheritance in c++
// 1- Single inheritance - A derived class with only one base class
// 2- Multiple inheritance - A is class with more than one Base class
// 3- Hierarchial inheritance- Several derived classes from a single base class
// 4- Hybrid inheritance- Combination of multiple inheritance

// Base class is below
// class employee
// {
//     // int id; // we transfer it from private to public becz
//     //  else it will throw error becz see according to
//     //  inheritance properties if it is private not see

// public:
//     int id;
//     float salary;
//     employee(int inpid)
//     {
//         id = 1;
//         salary = 34.0;
//     }
//     employee() {}
// };

// // Derived class syntax
// /*
// class {{derived-class name}} : {{visibility-mode}} {{base-Class-name}}
// {
//     //members /methods/etc....
// }
// note:
// 1- Default visibility mode is private ie.if we not define either
//    public or private it define private one.
// 2- Public visibility mode: Public members of the base class becomes
//     Public members of the derived class
// 3- Private visibility mode: Public members of the base class becomes
//    public members of the derived class
// 4- Private members are nevers inherited ie. not execute  */

// // Creating a programmer class derived from employee base class

// class programming : employee // here employee is private member so if we want to execute it
// {                            // need to make public employee
// public:
//     programming(int inpid)
//     {
//         id = inpid;
//     }
//     int languageCode = 19;
//     void getData()
//     {
//         cout << id << endl;
//     }
// };
// int main()
// {
//     employee Akshay(1), Ram(2);
//     cout << Akshay.salary << endl;
//     cout << Ram.salary << endl;
//     programming skillf(10);
//     cout << skillf.languageCode << endl;
//     skillf.getData();
//     return 0;
// }