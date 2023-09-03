#include <iostream>
using namespace std;

//*****************Binary search in C++***************
// Binary search only work on'monotonic functions' ie. values eithe on increasing or decreasing order
// approach is to find mid element and then compare if equal then return index if not compre again with part we
// want to go left or write according to mid element similary goes until the element no find
// in case of binary search the time complexity is O(logN)-->N/2 operations are there so N/2^K at last and finally
// length is'1' so that's why we solve this it is k=log(N)

// int binarysearch(int arr[], int size, int key)
// {
//     int start = 0;
//     int end = size - 1;

//     // int mid = (start + end) / 2; // minute problem ie if our start and end  is 2^31 -1 then at the time of sum
//     // it will go bryound the range of int . so to avoid this we have used

//     int mid = {start + (end - start) / 2};

//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }
//         // go to right part
//          else if (key > arr[mid])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = {start + (end - start) / 2};
//     }
//     return -1;
// }

// int main()
// {
//     int even[8] = {2, 4, 6, 8, 12, 18};
//     int odd[7] = {3, 8, 11, 14, 16};

//     int index_of_even = binarysearch(even, 6, 18);
//     cout << "Index of 18 is " << index_of_even << endl;

//     int index_of_odd = binarysearch(odd, 7, 14);
//     cout << "Index of 14 is " << index_of_odd << endl;

//     return 0;
// }