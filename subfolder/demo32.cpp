#include <iostream>
using namespace std;

//**********Destructors in c++*************
// Destructor neither takes any arguments nor return any value
// compiler run it by implicitly
// int count = 0;
// class num
// {
// public:
//     num()
//     {
//         count++;
//         cout << "This is the time when constructor is called for object number" << count << endl;
//     }
//     ~num()
//     { // Destructor use
//         cout << "This is time when my destructor is called for object number " << count << endl;
//         count--;
//     }
// };

// int main()
// {
//     cout << "we are inside our main function " << endl;
//     cout << "Creating first objects n1" << endl;
//     num n1;
//     {
//         cout << "Entering this block" << endl;
//         cout << "Creating two more objects " << endl;
//         num n2, n3;
//         cout << "Exiting this block" << endl;
//     }
//     cout << "Back to main " << endl;
//     return 0;
// }

// constructor is made when object is made

// when complier feel that there is no need of object now onward then it
// call the destruct and this destructor destruct the object
