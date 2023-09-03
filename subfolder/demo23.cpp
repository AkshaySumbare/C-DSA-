#include <iostream>
using namespace std;

// *********More about c++ Friend funcions ***********

//         class Y; // if we not give decleration then it will throw error becz of  Y in class X

// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };

// class Y
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }

//     friend void add(X, Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "summing datas of X and Y objects gives me " << o1.data + o2.data << endl;
// }
// int main()
// {
//     X a1;
//     a1.setValue(3);

//     Y b1;
//     b1.setValue(5);

//     add(a1, b1);

//     return 0;
// }

