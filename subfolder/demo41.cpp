#include <iostream>
#include <cmath>  // To do math operations like sin cos etc need to include cmath
using namespace std;

//***************how to make calulator using c++*************

// class SimpleCalculator
// {
//     int a, b;

// public:
//     void getDataSimple()
//     {
//         cout << "Enter the value of a " << endl;
//         cin >> a;
//         cout << "Enter the value of b " << endl;
//         cin >> b;
//     }
//     void performOperationsSimple()
//     {
//         cout << "The value of a + b is: " << a + b << endl;
//         cout << "The value of a - b is: " << a - b << endl;
//         cout << "The value of a * b is: " << a * b << endl;
//         cout << "The value of a / b is: " << a / b << endl;
//     }
// };
// class ScientificCalculator
// {
//     int a;

// public:
//     void getDataScientific()
//     {
//         cout << "Enter the value of a " << endl;
//         cin >> a;
//     }
//     void performOperationsScientific()
//     {
//         cout << "The value of cos(a) is:" << cos(a) << endl;
//         cout << "The value of sin(a) is: " << sin(a) << endl;
//         cout << "The value of tan(a) is: " << tan(a) << endl;
//         cout << "The value of cot(a) is: " << tan(a) << endl;
//     }
// };
// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {
// };
// int main()
// {
//     HybridCalculator calc;
//     calc.getDataSimple();
//     calc.performOperationsSimple();
//     calc.getDataScientific();
//     calc.performOperationsScientific();

//     return 0;
// }