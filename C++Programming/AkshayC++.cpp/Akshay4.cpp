#include <iostream>
using namespace std;
//******Searching in arrays********
// Time complixity of linear search is-> O(n)

// int linearSearch(int array[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (array[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int n;
//     cout << "Enter the size of array " << endl;
//     cin >> n;
//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int key;
//     cin >> key;
//     cout << linearSearch(array, n, key) << endl;
//     return 0;
// }

//**************Binary array*************
// Condition is elements are in sorted order
// time complexity of Binary search is O(log resto n base 2 <<<<<<<< Seaching array complexity )

// int binarySearch(int array[], int n, int key)
// {
//     int s = 0;
//     int e = n;
//     while (s <= e)
//     {
//         int mid = (s + e) / 2;

//         if (array[mid] == key)
//         {
//             return mid;
//         }
//         else if (array[mid] > key)
//         {
//             e = mid - 1;
//         }

//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int key;
//     cin >> key;
//     cout << binarySearch(array, n, key) << endl;

//     return 0;
// }

//************Sorting of an array***********
// 1- Selection Sort:-> find the minimum element in unsorted array and swap
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
// at the begining of unsorted array

// int main()
// {
//     int n;
//     cout << "Enter the size of array " << endl;
//     cin >> n;

//     int array[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     cout << "Your sorting array is: " << endl;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (array[j] < array[i])
//             {
//                 int temp = array[j];
//                 array[j] = array[i];
//                 array[i] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

//************2-Bubble sort**********
// Reapetedly swap two adjacent elements if they are in wrong order;
// eg. array[6]={12,45,23,51,19,8}
//  12 45 23 51 19 8
//  12 45 23 51 19 8
//  12 23 45 51 19 8
//  12 23 45 51 19 8
//  12 23 45 19 51 8
//  12 23 45 19 8 51  // so on until the result obtain

// int main()
// {
//     int n;
//     cout << "Enter the size of array " << endl;
//     cin >> n;
//     int array[n];
//     cout << "Enter the array no " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {
//             if (array[i] > array[i + 1])
//             {
//                 int temp = array[i];
//                 array[i] = array[i + 1];
//                 array[i + 1] = temp;
//             }
//         }
//         counter++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

//**************3-Inserction Sort************
// insert an element from unsorted array to correct position in sorted array
// 12 45 23 51 19 8
// 12 45 23 51 19 8
// 12 23 45 51 19 8
// 12 23 45 51 19 8
// 12 19 23 45 51 8
// 8  12 19 23 45 51

// int main()
// {
//     int n;
//     cout << "Enter the array no " << endl;
//     cin >> n;

//     int array[n];
//     cout << "Your sorted array is " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> array[i];
//     }
//     for (int i = 1; i < n; i++)
//     {
//         int current = array[i];
//         int j = i - 1;
//         while (array[j] > current && j >= 0)
//         {
//             array[j + 1] = array[j];
//             j--;
//         }

//         array[j + 1] = current;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }


//****************Questions***********
// asked in amazon and oracle 
// First repetating elements 
//eg. Given an array arr[] of size N. the task is to find the first repeating elememts in the array of integers i.e.
// an elements that occurs more than once and whose index of first occurance is smallest.
// Constraints:
// 1<=N<=10 resto 6
// 1<=Ai<=10 resto 6
