#include <iostream>
using namespace std;

//********Famous question on Binary search array*******

// 1) finding a pivot element in an given array
// arr[]= {1,2,3,7,9} -> if we rotated by 2 means -> {7,9, 1,2,3} ie means first 2 element replace by last 2
//  pivote means minimum value of an array or also max.

// int getPivote(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {

//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
// }

// int main()
// {
//     int arr[5] = {8, 10, 17, 1, 3};
//     cout << "Pivote is " << getPivote(arr, 5) << endl;
//     return 0;
// }

// 2)Search in rotated sorted array[most famous example]

// int getPivote(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] >= arr[0])
//         {
//             start = mid + 1;
//         }
//         else
//         {

//             end = mid;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return start;
// }

// int binarySearch(int arr[], int size, int key, int k)
// {
//     int start = 0, end = size - 1;
//     int mid = {start + (end - start) / 2};
//     int ans = -1;

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         // go to right part
//         else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else if (key < arr[mid])
//         {
//             end = mid - 1;
//         }
//         mid = {start + (end - start) / 2};
//     }
//     return ans;
// }

// int findPosition(int arr[], int size, int k)
// {
//     int pivote = getPivote(arr, size);
//     if (k >= arr[pivote] && k <= arr[size - 1])
//     { // BS on second line
//         return binarySearch(arr, pivote, size - 1, k);
//     }
//     else
//     { // BS on first line
//         return binarySearch(arr, 0, pivote, k);
//     }
// }
// int main()
// {
//     int arr[5] = {8, 10, 17, 1, 3};
//     cout << "Pivote element index is " << getPivote(arr, 5) << " and the value is " << arr[getPivote(arr, 5)] << endl;
//     return 0;
// }

// 3) Square root using binary search

// long long int Squareroot(int n)
// {
//     int s = 0;
//     int e = n;
//     int mid = s + (e - s) / 2;

//     long long int ans = -1;
//     while (s <= e)
//     {
//         long long int square = mid * mid; // here long long becz int value 2^31 and if multiply itself code beyound
//         if (square == n)                  // int max.
//         {
//             return mid;
//         }
//         else if (square < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         else
//         {
//             e = mid - 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }

// double morePreciousSolution(int n, int precision, int temprarySol)
// {

//     double factor = 1;
//     double ans = temprarySol;

//     for (int i = 0; i < precision; i++) // precision me no of values we want after decimal
//     {
//         factor = factor / 10;

//         for (double j = ans; j * j < n; j = j + factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cout << "Enter the value of square " << endl;
//     cin >> n;

//     int temprarySol = Squareroot(n);
//     cout << "the square root of " << n << " is " << morePreciousSolution(n, 3, temprarySol) << endl;
//     // here 3 is no of values after decimal we want
//     return 0;
// }