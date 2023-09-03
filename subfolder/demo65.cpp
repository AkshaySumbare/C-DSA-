#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

//*********function object***********

int main()
{
    //     int arr[] = {1,56,76,98,9}; // This use t sort no accordingt accending order
    //     sort(arr, arr+5);  // we can also fixed the no till we want to get acending order eg.
    //   //                     arr+4 etc.
    //     for (int i = 0; i < 5; i++)
    //     {
    //     cout<<arr[i]<<endl;
    //     }

    // For decending order values 
    int arr[] = {1, 56, 76, 98, 9};
    sort(arr, arr + 5, greater<int>()); // As like reater there are several other operators like
    for (int i = 0; i < 5; i++)         // +,*,-,logical not
    {
        cout << arr[i] << endl;
    }

    return 0;
}