#include <iostream>
using namespace std;
// problems based on binary search

/*
// this code is for most left occurance
int firstOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = {start + (end - start) / 2};
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        // go to right part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = {start + (end - start) / 2};
    }
    return ans;
}

// for right most occurance
int lastOccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = {start + (end - start) / 2};
    int ans = -1;

    // this code is for mid left portion
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        // go to right part
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = {start + (end - start) / 2};
    }
    return ans;
}

int main()
{
    int even[15] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5};

    cout << "First Occurance of 3 is at index " << firstOccurance(even, 15, 3) << endl;
    cout << "last Occurance of 3 is at index " << lastOccurance(even, 15, 3) << endl;
    cout<<"The occurance of 3 is "<<(lastOccurance(even, 15, 3)-firstOccurance(even, 15, 3))+1<<endl;
    return 0;
}
*/

// Peak index in Mountain array using Binary search

// int Peak(int arr[], int size)
// {

//     int start = 0;
//     int end = size - 1;

//     int mid = start + (end - start) / 2;
//     while (start < end)
//     {
//         if (arr[mid] < arr[mid + 1])
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

//     int arr[4] = {1, 3, 5, 1};

//     cout << "The index of mountain array of given array is " << Peak(arr, 4);
//     cout <<" and the value of this mountain array is " << arr[Peak(arr, 4)] << endl;

//     return 0;
// }





