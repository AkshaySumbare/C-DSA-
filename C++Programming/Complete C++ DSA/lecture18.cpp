#include <iostream>
using namespace std;

//**************3-Inserction Sort************
// insert an element from unsorted array to correct position in sorted array
// in inserction sort we dont swap elements insted of that we shif the element ie. left or right 
//12| 45 23 51 19 8    // | operations ie. 1 to last 
// 12 45| 23 51 19 8
// 12 23 45| 51 19 8
// 12 23 45 51| 19 8
// 12 19 23 45 51|  8
// 8  12 19 23 45 51|
// thinking as like card examples ie.comparing ideal position way

// int main()
// {

//    int n;
//    cout << "Enter the array no " << endl;
//    cin >> n;

//    int arr[n];
//    cout << "Your sorted array is " << endl;
//    for (int i = 0; i < n; i++)
//    {
//       cin >> arr[i];
//    }
//    // for (int i = 1; i < n; i++)
//    // {
//    //    int current = array[i];
//    //    int j = i - 1;
//    //    while (array[j] > current && j >= 0)
//    //    {
//    //       array[j + 1] = array[j];
//    //       j--;
//    //    }

//    //    array[j + 1] = current;
//    // }
//    // for (int i = 0; i < n; i++)
//    // {
//    //    cout << array[i] << " ";
//    // }
//    // cout << endl;

//    cout << Inserctionsort(arr, n) << endl;

//    return 0;
// }


// same example using the functions 

// void insertionSort( int arr[], int n) {
//   for (int i = 1; i < n; i++) {
//     int temp = arr[i];
//     int j = i - 1;
//     for (; j >= 0; j--) {
//       // becz. we comapre i with i-1 and left all elements. becz we assumed the 1 element is sorted then comp.

//       if (arr[j] > temp) {
//         // shift
//         // copy arr[j] into arr[j+1]
//         arr[j + 1] = arr[j];
//       }
//        else {
//         // ruk jao
//         break;
//       }
//       }
//     arr[j + 1] = temp;
//   }
// }
// void printArr(int arr[], int n){
  
//    for (int i = 0; i <n; i++)
//    {
//       cout<<arr[i]<<" ";
//    }
   
// }

// int main(){

//    int arr[5]={3,2,5,3,8};
   
//    cout<<"Before sorting the arr "<<endl;
//    printArr(arr,5);
//    insertionSort(arr, 5);

//    cout<<endl;
//    cout<<" After sorting the array "<<endl;
//    printArr(arr,5);
   
 //  return 0;
// }

//Notes : Why this method is used becz. this is more adaptive method , stable algorithm  

// Space complexity- O(1) -> ie. constant becz. only variables are there 
// Time complexity -> O(n^2)
//Best case -> Already sorted array // in this case our Time complexity is O(n)
// worse case -> Reversed array // in this case our Space complexity is O(n^2)