#include <iostream>
#include <vector>
using namespace std;

// problems based on Array using vector

// 1) reverse of an array
// logic is to swap the first1 and last1 similarly..

// vector<int> reverse(vector<int> v)
// {
//     int s = 0, e = v.size() - 1;

//     while (s <= e)
//     {
//         swap(v[s], v[e]);
//         s++;
//         e--;
//     }
//     return v;
// }

// void print(vector<int> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     vector<int> v;

//     v.push_back(11);
//     v.push_back(7);
//     v.push_back(3);
//     v.push_back(12);
//     v.push_back(4);
//     cout << "Given array is " << endl;
//     for (auto i : v)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << "Reverse array is " << endl;

//     vector<int> ans = reverse(v);

//     print(ans);

//     return 0;
// }

// 2) Merging of the two vectors

// void merge(int arr1[], int n, int arr2[], int m, int arr3[])
// {
//     int i = 0, j = 0;
//     int k = 0;
//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             arr3[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
//     // copy first array extra  element
//     while (i < n)
//     {
//         arr3[k] = arr1[i];
//         k++;
//         i++;
//     }

//     // copy second array extra element

//     while (j < m)
//     {
//         arr2[k] = arr2[j];
//         k++;
//         j++;
//     }
// }
// also do this way
// void print(int ans[], int m)
// {
//     for (int j = 0; j < m; j++)
//     {
//         cout << ans[j] << " ";
//     }
//     cout << endl;
// }

// void print(int ans[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};

//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     print(arr3, 8);

//     return 0;
// }

// merging array in first array
// incomplete example solve after

// 3)make an array in such way
// void swap(int arr[], int n)
// {
//     int nonZero = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             swap(arr[i], arr[nonZero]);
//             nonZero++;
//         }
//     }
// }
// void PrintArray(int arr[], int n)
// {

//     cout << "Sorted array is " << endl;
//     for (int i = 0; i < n; i++)
//     {

//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
    // int arr[5] = {0, 1, 0, 3, 12};
    // cout << "Given array is " << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

//     int n;
//     cout << "Enter the size of an array " << endl;
//     cin >> n;

//     int arr[100];
//     cout << "Give input  of array " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     swap(arr, n);
//     PrintArray(arr, n);

//     return 0;
// }