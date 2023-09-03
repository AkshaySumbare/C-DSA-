#include <iostream>
using namespace std;

//*************Introduction to Arrays in C++**********
// Array contains only similar type of Data types eg. int, char, etc.
// we can access through indexing
// why we need array? answer is to store multiple values in single variable
// decleration of an array -> eg. int dost[10]={values};

// int main()
// {

// declare
//    int number[15];
//    cout<<"value at 1 index "<<number[1]<<endl;

// initialising of an array
// int second[3] = {5, 7, 11};

// accessing an element
// cout << "value at 1 index " << second[2] << endl;

// int third[15] = {2, 7};
// int n = 15;
// cout << "Printing the array " << endl;
// for (int i = 0; i < n; i++)
// {
//    cout<<third[i]<<" ";
// }

//**********Arrays with functions***********

//     return 0;
// }

//**********Arrays with functions***********

// void PrintArray(int arr[], int size)
// {

//     cout << "Printing the array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "Printing Done " << endl;
// }

// int main()
// {
//     int third[15] = {2, 7};
//     PrintArray(third, 15);

//     int fourth[15] = {0};
//     PrintArray(fourth, 10);

//     int fifth[15] = {1};
//     PrintArray(fifth, 15);

//     return 0;
// }

//*****Array if a character by using function******

// void printArray(char ch[], char size)
// {

//     cout << "Printing the array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << ch[i] << " " ;
//     }
//     cout << "Printing Done " << endl;
// }

// int main()
// {
//     char ch[5] = {'a','b','c','d','e'};

//     printArray(ch,5);

//         return 0;
// }

//*****declare the students marks by using the arry with the help of function********

// void printArray(int Mathmarks[], int size)
// {

//     cout << "printing array is " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout << Mathmarks[i]<<" ";
//     }
//     cout << "Done " << endl;
// }

// int main()
// {

//     int Mathmarks[15] = {88, 91, 67, 87, 75, 81, 78, 77, 86, 90, 89, 66, 56, 45, 54};
//     printArray(Mathmarks, 15);
//     cout<<"your Mathmarks is "<<Mathmarks[5]<<endl;

//    return 0;
// }

// Note- dont write size variale in main function insted of number

// int getMax(int num[], int size)
// {
//     int max = INT32_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] > max)
//         {
//             max = num[i];
//         }
//     }
//     // return max value
//     return max;
// }
// int getMin(int num[], int size)
// {
//     int min = INT32_MAX;
//     for (int i = 0; i < size; i++)
//     {
//         if (num[i] < min)
//         {
//             min = num[i];
//         }
//     }
//     // return min value
//     return min;
// }

// int main()
// {
//     int size;
//     cout << "Enter the size of an array " << endl;
//     cin >> size;

//     int num[100];

//     // taking input in array
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }
//     cout << "Maximum value is " << getMax(num, size) << endl;
//     cout << "Minimum value is " << getMin(num, size) << endl;
//     return 0;
// }

//****************Scopes  in C++**********

// void update(int arr[], int size)
// {
//     cout << "Inside the function " << endl;

//     // updating the array's first element
//     arr[0] = 120;

//     // printing the array
//     for (int i = 0; i < 3; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     cout << "Going back to main function " << endl;
// }

// int main()
// {

//     int arr[3] = {1, 2, 3};
//     update(arr, 3);

//     // printing the array       //in this case also the value of indexing 0 in main function also change and
//     for (int i = 0; i < 3; i++) // become the 120. but we have seen the dummy function where the value cant change
//     {                           //in the main function so how is it possible? the answer becz main function gives
//         cout << arr[i] << " ";  // adress of its first array and it stores in update. so whenever there is update
//     }                           // our array also update
//     cout << endl;

//     return 0;
// }

// int ans = 0;
// int sum(int num[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         ans = ans + num[i];
//     }
//     return ans;
// }

// int main()
// {

//     int size;
//     cout << "Enter the size of an array " << endl;
//     cin >> size;

//     // taking input from array
//     int num[100];
//     for (int i = 0; i < size; i++)
//     {
//         cin >> num[i];
//     }

//     cout << "The sum of given array is " << sum(num, size);

//     return 0;
// }

//***************Linear search***********

// int search(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 1)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

//     if (search(arr,10))
//     {
//         cout<<"1 is present in this array "<<endl;
//     }
//     else{
//         cout<<"1 is not resent in this array "<<endl;
//     }

//     return 0;
// }

// int search(int arr[], int size, int key)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     int size;
//     cout << "Enter the size of an array " << endl;
//     cin >> size;

//     int arr[100];
//     cout << "Enter the array of size " << size << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }

//     int key;
//     cout << "Enter the key you want to search " << endl;
//     cin >> key;

//     if (search(arr, 10, key))
//     {
//         cout << key << " is present in this array " << endl;
//     }
//     else
//     {
//         cout << key << " is not present in this array " << endl;
//     }

//     return 0;
// }
// in this example we go through onr by onr and check the number so this approach is called linear search;

//**********Reverse an array**********
// helping swap 1 to n etc.

// void reverse(int arr[], int size)
// {

//     int start = 0;
//     int end = size - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr[6] = {1, 4, 0, 5, -2, 15};
//     int brr[5] = {2, 6, 3, 9, 4};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);

//     return 0;
// }

//******same example by using in one function only instead of one

// void reverse(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;

//     for (int i = 0; i < size; i++)
//     {

//         while (start <=end)
//         {
//             swap(arr[start], arr[end]);
//             start++;
//             end--;
//         }
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {

//     int arr[6] = {1, 4, 0, 5, -2, 15};
//     int brr[5] = {2, 6, 3, 9, 4};

//     reverse(arr, 6);
//     reverse(brr, 5);

//     return 0;
// }