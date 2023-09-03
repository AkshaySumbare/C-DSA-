#include <iostream>
using namespace std;

//************Problems based on Arrays ********

// problem no 1- Swappping the alternat.

// void printArray(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// void swapAlternat(int arr[], int size)
// {

//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// int main()
// {

//     int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
//     int odd[5] = {11, 33, 9, 76, 43};

//     swapAlternat(even, 8);
//     printArray(even, 8);

//     return 0;
// }

// alternative method within single function

// void swapAlternat(int arr[], int size)
// {

//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }




// int main()
// {

//     int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
//     int odd[5] = {11, 33, 9, 76, 43};

//     swapAlternat(even, 8);
//     swapAlternat(odd, 5);

//     return 0;
// }

// finding the unique no in an array other no are two times

// int unique(int arr[], int size)
// {

//     int ans = 0;
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans^arr[i];
//     }
//     return ans;
// }

// int main()
// {

//     int arr[7] = {2, 3, 1, 6, 3, 6, 2};

//     cout << unique(arr, 7)<<endl;

//      return 0;
//  }

// void printArray(int arr[], int size)
// {

//   for (int i = 0; i < size; i++)
//   {
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }

// void sortOne(int arr[], int size)
// {

//   int left = 0, right = size - 1;
//   while (left < right)
//   {
//     while (arr[left] == 0 && left < right)
//     {
//       left++;
//     }

//     while (arr[right] == 1 && left < right)
//     {
//       right--;
//     }
//     // we we come here
//     // arr[i]==1 and arr[j]==0;
//     if (left < right)
//     {
//       swap(arr[left], arr[right]);
//       left++;
//       right--;
//     }
//   }
// }

// int main()
// {
//   int arr[8] = {1, 1, 0, 0, 0, 0, 1, 0};
//   sortOne(arr, 8);
//   printArray(arr, 8);

//   return 0;
// }






