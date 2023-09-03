#include <iostream>
using namespace std;

// Pointers to Object and arrow Operator

// class Complex
// {
//     int real, imaginary;

// public:
//     void getData()
//     {
//         cout << " The real part is " << real << endl;
//         cout << " The imaginary part is " << imaginary << endl;
//     }
//     void setData(int a, int b)
//     {
//         real = a;
//         imaginary = b;
//     }
// };

// int main()
// {
//     // Complex c1;
//     // Complex *ptr = &c1;  // how to access public member of object using class
//     Complex *ptr = new Complex; // also run by this method
//                                 // c1.setData(1, 55);
//     // c1.getData();
//     // (*ptr).setData(1, 55);
//     ptr->setData(1, 54); // arrow operator
//     (*ptr).getData();

//     return 0;
// }