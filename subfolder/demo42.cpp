#include <iostream>
using namespace std;

//************Constructor in Derived Class in c++***********
/*
 ORDER OF EXECUTION:
 Case1:
 class B: public A{
    //order of execution of constructor is ->first A() then B()
 };

Case2:
Class A: public B,public C{
    //order of execution of constructor is ->B() then C() then  A()
};
Case3:
 Class A: public B, virtual piblic C{
  //order of execution of constructor is ->  C() then B() then A
 };  // becz. virtual get prfrence over


*/
// class Base1
// {
//     int data1;

// public:
//     Base1(int i)
//     {
//         data1 = i;
//         cout << "Base1 class constructor called " << endl;
//     }
//     void printDataBase1(void)
//     {
//         cout << "The value of data1 is " << data1 << endl;
//     }
// };
// class Base2
// {
//     int data2;

// public:
//     Base2(int i)
//     {
//         data2 = i;
//         cout << "Base2 class constructor called " << endl;
//     }
//     void printDataBase2(void)
//     {
//         cout << "The value of data2 is " << data2 << endl;
//     }
// };
// class Derived : public Base1, public Base2
// {
//     int derived1, derived2;

// public:
//     Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
//     {
//         derived1 = c;
//         derived2 = d;
//         cout << "Derived class constructor called " << endl;
//     }
//     void printDataDerived(void)
//     {
//         cout << "The value of derived1 is " << derived1 << endl;
//         cout << "The value of derived2 is " << derived2 << endl;
//     }
// };
// int main()
// {

//     Derived Akshay(3, 4, 7, 9);
//     Akshay.printDataBase1();
//     Akshay.printDataBase2();
//     Akshay.printDataDerived();

//     return 0;
// }