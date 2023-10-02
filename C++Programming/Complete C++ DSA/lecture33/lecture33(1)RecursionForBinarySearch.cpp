#include <iostream>
using namespace std;
#include <bits/stdc++.h>

//************************Recursion and Binary Search**********************8
/*
bool isSorted(int arr[], int size)
{
  //*****************Recursive Approch*****************

    //base case
     if (size==0 || size==1)
     {
         return true;
     }

     //process
    if (arr[0]>arr[1])
    {
        return false;
    }
    else{
        //Recursive approach
        bool remainingPart =isSorted(arr+1, size-1);
        return remainingPart;
    }


//****************Iterative approch***********

//     if (size==0 || size==1)
//     {
//         return true;
//     }

//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i - 1] > arr[i])
//         {
//             return false;
//         }

//     }
//     return true;
 }

int main()
{

    int arr[6] = {1, 2, 3, 9, 9, 16};
    // bool ans = isSorted(arr, 6);

    if (isSorted(arr, 6))
    {
        cout << " Array is sorted " << endl;
    }
    else
    {
        cout << " Array is Not Sorted " << endl;
    }

    return 0;
}

*/


//**************

// void print(int arr[], int size){

//     cout<<"Size of arry is "<<size<<endl;

//     for (int i = 0; i <size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// bool Search(int arr[], int size, int key)
// {
//     print(arr,size);
//     // base case
//     if (size == 0)
//     {
//         return false;
//     }

//     // recursive code

//     if (arr[0] == key)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingPart = Search(arr + 1, size - 1, key);
//         return remainingPart;
//     }
// }

// int main()
// {

//     int arr[5] = {3, 5, 7, 2, 6};
//     int key = 2;

//     bool ans = Search(arr, 5, key);
//     if (ans)
//     {
//         cout << key << " Present "<< endl;
//     }
//     else
//     {
//         cout << key << " Not Present " << endl;
//     }

//     return 0;
// }

//*****************Binary Search using Recursion*************

void print(int arr[], int s, int e)
{

    cout << "Size of arry is " << e << endl;

    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool binarySearch(int *arr, int s, int e, int key)
{
    print(arr, s, e);

    // base case

    // 1) if element not found
    if (s > e)
    {
        return false;
    }
      int mid = {s + (e - s) / 2};
     cout<<"Mid is "<<arr[mid]<<endl;
    // 2) if element found
    if (arr[mid] == key)
    {
        return true;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, mid - 1, key);
    }
}

int main()
{

    int arr[11] = {2, 4, 6, 10, 14, 18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    if (binarySearch(arr, 0, size-1, key))
    {
        cout << key << " Present in the given array " << endl;
    }
    else
    {
        cout << key << " Key is not presernt " << endl;
    }

    return 0;
}