#include <iostream>
using namespace std;

//**************Sorting in C++***********
// 1) Selection sort
// Sort -> means to arrange in increasing order ie. arr[5]={1,4,6,3,2} -> sotr means arr[5]->{1,2,3,4,6}
// in seletion sort there is different different rounds in this round we picked up smallest element and placed it
// to right . here the swapping happens ie. swap first value to minimum value and again second one to second
// minimum and so on .
// when used selection  sort -> whenever our size of an array is small that time think about it
/* eg.
   find the minimum element in unsorted array and swap
// it with element at begining
// eg. 12,45,23,51,19,8
//      8,45,23,51,19,12
//      8,12,23,51,19,45
//      8,12,19,51,23,45
//      8,12,19,23,45,51
//      8,12,19,23,45,51
// now it works on swapping method ie swap minimum element with 1 and then
// second minimum element with second no and .........
// ie find the minimum element in unsorted array and swap with element
// at the begining of unsorted array*/

// problem 1) Selection sort

// void SelectionSort(int arr[], int n)
// {
//    cout << "Your sorting array is: " << endl;
//    for (int i = 0; i < n - 1; i++)
//    {
//       for (int j = i + 1; j < n; j++)
//       {
//          if (arr[j] < arr[i])
//          {
//             int temp = arr[j];
//             arr[j] = arr[i];
//             arr[i] = temp;
//          }
//       }
//    }
// }

// void PrintArray(int arr[], int n)
// {

//    for (int i = 0; i < n; i++)
//    {
//       cout << arr[i] << " ";
//    }
//    cout << endl;
// }

// int main()
// {
//    int arr[5] = {2, 1, 7, 3, 5};
//    cout << "Before sorting the array " << endl;
//    PrintArray(arr, 5);
//    SelectionSort(arr, 5);

//    cout << endl;
//    cout << "Sorted arry is : " << endl;
//    PrintArray(arr, 5);

//    return 0;
// }

//**************Stable and unstable array***************

//***Selection sort is not stable sorting algorithm becz. it swaps non-adjacent element.
// Stable sorting algorithms preserve the relative order of equal elements, while unstable sorting
// algorithms don't. In other words, stable sorting maintains the position of two equals elements relative to
// one another. Let A be a collection of elements and < be a strict weak ordering on the elements.
