#include <iostream>
using namespace std;

//*********************Pointers ********************
// Pointer in Arrays
// int arr[10];
//  here the location of 1 value of array is itself defined by name ie. here arr
//

// int main(){

// int arr[10]={2,5,6};
// adress of array
//  cout<<" Adress of first element block "<<arr<<endl; // arr bydefault shows adress of 1 element
//  //adress of specific array value
//  cout<<" Adress of first element of array is "<<&arr[0]<<endl;
//  cout<<" Adress of first element of array is "<<&arr<<endl;

// value of elements as we know only arr gives adress OF "0" array index now *arr give value of index 0
//  cout<<"1 "<<*arr<<endl;
//  cout<<"2 "<<arr[2]<<endl;
//  cout<<"3 "<<*(arr+2)<<endl;  //bracket works as index and gives value at index 1
//  cout<<"4 "<<*arr+2<<endl;    //it gives value next to *arr sequencly ie. if *arr is 6 then it 7.
//  cout<<"5 "<<(*arr)+2<<endl;
//******************Formula *************
//  arr[i]= *(arr+i) or i[arr] =*(i+arr)

// cout<<1[arr]<<" "<<*(1+arr)<<endl;

// // or
// int i=2;
// cout<<i[arr]<<" "<<*(i+arr)<<endl;

// int temp[10]={1,2,3};
// cout<<sizeof(temp)<<endl;

// int *ptr=&temp[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// cout<<sizeof(&ptr)<<endl;
// cout<<sizeof(*temp)<<endl;
// cout<<sizeof(&temp)<<endl;

// int arr[10]={1,2,3,4,3,4,5,7,8,9};
// int *ptr=&arr[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// cout<<sizeof(&ptr)<<endl;
// cout<<sizeof(*arr)<<endl;
// cout<<sizeof(&arr)<<endl;
// //

// cout<<(ptr)<<endl;
// cout<<(*ptr)<<endl;
// cout<<(&ptr)<<endl;
// cout<<(*arr)<<endl;
// cout<<(&arr)<<endl;

// int a[20] ={1,2,3,5};
// cout<<&a[0]<<endl;
// cout<<&a<<endl;
// cout<<a<<endl;

// int arr[5]={1,2,3,4,5};
// char ch[6]="abcde";

// cout<<arr<<endl;  // here we have conclusion that 'cout' work different for char and arr
// cout<<*ch<<endl;  // in case of array it gives adress while in case of cha gives entire value

//    char *c=&ch[0];
//    cout<<c<<endl; // it print entire string until the null char not attain if we gives 0 to ch[]
//    cout<<*c<<endl; // print onlt a
//    cout<<*(c+1)<<endl; // print  b

//    char temp='z';
//    char *p=&temp;

//    cout<<p<<endl;

//****************Function form*************
//  void print(int*p){
//     cout<<*p<<endl;
//  }
// int main()
// {
//     int value = 5;
//     int *p = &value;

//     print(p);

// void print(int *p)
// {
//     cout << *p << endl;
// }

// void update(int *p)
// {
//     p = p + 1;
//     cout << "update inside " << p << endl;
// }
// int main()
// {
//     int value = 5;
//     int *p = &value;

//     // print(p);

//     cout << "Before " << p << endl;
//     update(p);
//     cout << "After " << p << endl;

//     return 0;
// }


// void print(int *p)
// {
//     cout << *p << endl;
// }

// void update(int *p)
// {
//     *p = *p + 1;
//     cout << "update inside " << *p << endl;
// }
// int main()
// {
//     int value = 5;
//     int *p = &value;

//     // print(p);

//     cout << "Before " << *p << endl;
//     update(p);
//     cout << "After " << *p << endl;

//     return 0;
// }


//Benefit of function pointer(part of array we can search )
// int getSum(int *arr, int n){
//     int ans=0;
//     for (int  i = 0; i <n; i++)
//     {
//        ans=ans+arr[i];
//     }
//     return ans;
    
// }

// int main(){
  
//    int arr[7]={1,2,3,4,5,6,7};
//    cout<<"Sum is "<<getSum(arr+3, 4)<<endl;

//     return 0;
// }


