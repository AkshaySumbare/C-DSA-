#include <iostream>
using namespace std;
//*********** Parameterized and default constructor
// class Complex
// {
//     int a, b;

// public:
//     Complex(void); // constructor declaration
//     void printNumber()
//     {
//         cout << "your number is " << a << " +" << b << "i" << endl;
//     }
// };
// Complex ::Complex(void) //******* This is a default constructor it takes no parameteres.
// {
//     it runs automatically behind the scene.a = 10;
//     b = 7;
// }
// int main()
// {

//     Complex a;
//     a.printNumber();

//     return 0;
// }

// // ****************************Parameterized constructors**********************
// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Parameterized constructor
//     void printNumber()
//     {
//         cout << "your number is " << a << " +" << b << "i" << endl;
//     }
// };
// Complex ::Complex(int x, int y) // This is a parameterized constructors
// {                               // it takes two value from user
//     a = x;
//     b = y;
// }
// int main()
// {
//     // below is Implicit call
//     Complex a(5, 6); // user provides parameterized value here

//     // below is Explicit call
//     Complex b = Complex(8, 9);
//     a.printNumber();
//     b.printNumber();
//     return 0;
// }