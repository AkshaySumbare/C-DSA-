#include <iostream>
using namespace std;

//**************Copy Constructors in c++***********
// copy constructor is a costructor which makes the copy of another objects
// class Numbers
// {
//     int a = 78; // here we can also only say int a and after gives the value in main
// public:
//     Number() {} // to execute number x,y,z in main we need to define default constructor

//     Number(int num)
//     {
//         a = num;
//     }
//     // when there is no copy constructor is found , compiler supplies its one copy constructor
//     // means here if we comment out the copy code still code will work becz complier supply values
//     Number(Number &obj)
//     {
//         cout << " Copy constructor called !!!! " << endl; // this is a copy constrctor
//         a = obj.a;
//     }
//     void display()
//     {
//         cout << "The number for this object is  " << a << endl;
//     }
// };
// int main()
// {
//     Number x, y(77), z(55), z2;
//     z.display();
//     x.display();
//     y.display();
//     Number z1(x); // here we have passed the value x we can also give y, z
//     z1.display(); // z1 should copy z or x or y
//     z2 = x;       // Copy constructor not called  becz "z2" it has already in Number variable
//     z2.display();
//     Number z3 = x; // copy constructor invoked here can put x, y, z
//     z3.display();
//     return 0;
// }