#include <iostream>
using namespace std;
// last eg we derived class publically now in this example
// we derived it privately

// class Base
// {
//     int data1; // default private ans it is not inheritable
// public:
//     int data2;
//     void setData();
//     int getData1();
//     int getData2();
// };
// void Base ::setData(void)
// {
//     data1 = 15;
//     data2 = 10;
// }
// int Base::getData1()
// {
//     return data1;
// }
// int Base::getData2()
// {
//     return data2;
// }
// class Derived : private Base
// { // class is derived publically
//     int data3;

// public:
//     void process();
//     void display();
// };
// void Derived ::process()
// {
//     setData(); // in case of private need to call in process
//     data3 = data2 * getData1();
// }
// void Derived ::display()
// {
//     cout << "Value of data 1 is " << getData1() << endl;
//     cout << "Value of data 2 is " << data2 << endl;
//     cout << "Value of data 3 is " << data3 << endl;
// }
// int main()
// {
//     Derived der;
//     // der.setData();  // Due to private we cant directly call the setData
//     der.process(); // Need to call it in process
//     der.display();

//     return 0;
// }