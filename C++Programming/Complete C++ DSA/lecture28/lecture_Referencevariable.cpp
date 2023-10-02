#include <iostream>
using namespace std;

//*********Refrences variable***************
// Same memory but different name
// syntax--> Datatype variablename1=value
//         Datatype &variablename2=variablename1
// eg. int i=5;
//     int&j=i; // ie j==i

// why need--> in case of pass by value the copy of variable create so whenever we update, substract and do any peration
//  in copy it coudn't change main body variable

// void update(int n){ //pass by value here new/copy memory is create
//     n++;
// }
// void update2(int& n){  //pass by refrence in this case new memory not create or not create any copy
//     n++;
// }

// int main()
// { /*
//    int i = 5;
//    int &j = i;
//    i++;
//    j--;
//    cout << i << endl;
//    cout << j << endl;

//    */

//   int n=5;
//   cout<<"Before value "<<n<<endl;
//   update(n);
//   cout<<"After the value "<<n<<endl;
//   update2(n);
//   cout<<n<<endl;

//     return 0;
// }

//   int& func2(int a){
//     int num=a;
//     int&ans=num;
//     return ans;
//   }

//   int* func1(int n){
//     int*ptr=&n;
//     return ptr;
//   }

// int main(){

//      int num=5;
//      func1(num);
//      cout<<num<<endl;
//      cout<<endl;
//      func2(num);
//      cout<<num<<endl;

//     return 0;
// }

//********************Dynamic and Static Memory allocation***************

// eg.still now we have used Stack memory ie. Static for our all pronblems means very less memory
//  eg. arr[n] which takes more memory called heap memory allocation called Dynamic memory . this is not good practice in case of array

// creating an heap memory array

// int main()
// {

//     new int[5];
//     int *arr = new int[5];
//     cout << sizeof(arr) << endl;

//     return 0;
// }

//**********creaing the arry using dynamic memory/heap memory
// int getSum(int *arr, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     // variable size array
//     int *arr = new int[n];

//     // taking input in array
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int ans = getSum(arr, n);
//     cout << ans << endl;

//     return 0;
// }

// Difference between Static and Dynamic Memory allocation
/*
     Static Memory allocation                  Dynamic Memory allocation

   1-syntax                                   1-syntax
     int arr[50]                              int *arr=new int[50]

   2- memory stack                            2- Memory Dynamic

   3- 50x4=200bytes                           3- 50x4=200bytes dymamic + 8bytes of pointer =208

   4-stack memory free after everyb iteration  4-in case of dynamic memory stack memory ie pointer memory *p release
   memory automatically clear/release           but new memory not release may chances of crash.need to manually free
//                                               using deleg. int *arr=new int[50] -> delete []arr; for int i-->del i;


*/


