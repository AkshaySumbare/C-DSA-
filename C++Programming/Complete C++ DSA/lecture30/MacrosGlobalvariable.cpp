#include <iostream>
using namespace std;

//*****************Macros***************
// A piece of code in a program that is replace by value of macron

// creating a macron
// #define PI 3.14
// int main()
// {

//     int r = 5;
//     // double PI=3.14;
//     // PI=PI+1; we can do this practice in case of anotheer way define the PI but cant do if defined as a macron
//     double area = PI * r * r;
//     cout << "Area is " << area << endl;

//     return 0;
// }

//************************Global variable******************
// its scope is global ie. throught program we can access.but it can be consider as a bad practice becz anyone can
// change it.

//*******************Inline Function**************
// Inline function are used to reduce the function call overhead

//***************Default Argument**************

// void print(int *arr, int n, int start=0)// here start is default argument with 0 as value we can give our own in main body
// {
//     for (int i = start; i < n; i++)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {

//     int arr[5] = {1, 4, 7, 8, 9};
   
//    print(arr,5);
//    cout<<endl;
//     print(arr, 5,3);

//     return 0;
// }