#include <iostream>
using namespace std;

// **********Bubble sort in C++**************
/*Reapetedly swap two adjacent elements if they are in wrong order;
eg. array[6]={12,45,23,51,19,8}
 12 45 23 51 19 8
 12 45 23 51 19 8
 12 23 45 51 19 8
 12 23 45 51 19 8
 12 23 45 19 51 8
 12 23 45 19 8 51  // so on until the result obtain  in this case the first largest element takes its right position */

// eg of bubble sort
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

//***** same  example by using  the function*****

// void bubbleSort(int arr[], int n){

//       int counter = 1;
//     while (counter < n)
//     {
//         for (int i = 0; i < n - counter; i++)
//         {  
//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[i + 1];
//                 arr[i + 1] = temp;
            
//             }
//         }
//         counter++;
//     }

// }

// void PrintArray(int arr[], int n){
    
//    for (int i = 0; i <n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }

// }
// int main()
// {

//     int n;
//     cout << "Enter the size of array " << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the array no " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

// //    cout<<bubbleSort(array, 5)<<endl;
//     cout<<"Before sorting the array "<<endl;
//     PrintArray(arr, n);
//     bubbleSort(arr, n);
    
//     cout<<endl;
//     cout<<"After sorting the array "<<endl;
//     PrintArray(arr,n);
//     return 0;
// }




