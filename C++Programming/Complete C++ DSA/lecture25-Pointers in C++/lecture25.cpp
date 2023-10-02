#include <iostream>
using namespace std;

//****************************************Pointers in C++************************************
/*
Pointer is a variable that stores the address of another variable. Pointer allows you to refer to the same memory
 space from multiple locations. That means you can update the memory in one location, and the change can be seen
 from another location in your program.
 eg. int num=5;
  // creating the pointer
  int *p=&num
 */

// Used to store the adress
// syntax of initiaization  eg.-> int*p =&num here the adress of &num is stored in the *p
//  eg. char ch='a'-> char*p=&ch it is read as 'p' is a pointer to char
//  to access this value we write cout<<*p<<endl;

int main()
{
  //   int num=5;
  //   int *ptr= &num;

  //   cout<<"Value is: "<<*ptr<<endl;
  //   cout<<"Adress is: "<<ptr<<endl;

  //   cout<<"size of integer is "<<sizeof(num)<<endl;
  //   cout<<"size of pointer is "<<sizeof(ptr)<<endl;

  //   int *p =0;
  //   cout<<*p<<endl;

  //  int num=5;
  //  int a=num;
  //  a++;
  //  cout<<num<<endl;
  //  cout<<<<endl;

  // int num = 5;
  // int *p = &num;
  // cout << "Before "<< num << endl;
  // (*p)++;
  // cout << "After "<< num << endl;

  //*************Copying the existing pointer to new pointer***************

  // int num=5;
  // int*p=&num;
  // int *q=p; // here p is working as a adress of num ie.&num
  // cout<<p<<"  "<<q<<endl;
  // cout<<*p<<" "<<*q<<endl;

  //*****important concept****************
  //   int i=3;
  //   int *t=&i;

  //   cout<<(*t)++<<endl; //same value not incerese
  //   *t=*t+1;
  //   cout<<*t<<endl;
  //   cout<<t<<endl;
  //   t=t+1;
  //   cout<<t<<endl;

  //   (*t)++;
  //   cout<<i<<endl;

  //**********************Problems based on pointers*****************

  // float f = 10.5;
  // float p = 2.5;

  // float *ptr = &p;
  // //(*ptr)++;
  //  //f++;
  //  *ptr = f;
  // //   cout<<&f<<endl;
  // //   cout<<f<<endl;
  // //   cout<<*ptr<<endl;

  // cout << *ptr << " " << f << " "<<p  << endl;

  // int b=10;
  // int *a=&b;
  // //(*a)++;
  // //(b)++;

  // cout<<*a<<" "<<b<<endl;

  //   char ch='a';
  //   char*ptr=&ch;
  //   (ch)++;
  //   cout<<*ptr<<endl;

  //  int a=7;
  //  int *c;
  //  //c=c+3;
  //  cout<<c<<" "<<*c<<endl;

  // int a[]={1,2,3,4};
  //  cout<<*(a)<< " "<<*(a+1)<<endl;

  // int arr[] = {1, 2, 3, 4};
  // int *p = (arr + 1);
  // cout << *arr + 16;
  // return 0;

  // int num=5;
  // int *ptr=&num;
  // cout<<num<<endl;
  // cout<<num<<endl;
  // cout<<*ptr<<endl;
  // cout<<ptr<<endl;

  //   int arr[10]={1,7,3,4,5,6};
  // cout<<*(arr+1)<<endl;

  //   int *p=&arr[0];
  //   cout<<p<<endl;
  //   cout<<&arr[0]<<endl;

  // int i=5;
  // int *q=&i;

  // cout<<q<<endl;
  // cout<<&i<<endl;
  // cout<<i<<endl;
  // cout<<*q<<endl;

  // int *p=&i;
  // cout<<p<<endl;
  // cout<<*p<<endl;

  // int *p=0;
  // p=&i;
  // cout<<p<<endl;

  // int num=5;
  // int a=num;
  // cout<<"A before "<<num<<endl;
  // a++;
  // cout<<"a after assign to a and a++ "<<a<<endl; // in this example we should know that pointer doesn't create copy
  // cout<<"num after assign to a and a++ "<<num<<endl;
  // num++;
  // cout<<"num after num++ "<<num<<endl;

  // int *ptr=&num;
  // cout<<"before "<<num<<endl;
  // cout<<"before "<<ptr<<endl;
  // (*ptr)++;
  // cout<<"After "<<num<<endl;
  // cout<<" "<<ptr<<endl;

  // int num=5;
  // int *p=&num;
  // int *q=p;
  // cout<<&num<<endl;
  // cout<<p<<endl;
  // cout<<q<<endl;

  // cout<<num<<endl;
  // cout<<*p+1<<endl;
  // cout<<*q<<endl;

  // int arr[10]={2,4,5,3,7};
  // cout<<arr+1<<endl;

  // int i=3;
  // int *t=&i;
  // *t=*t+1;
  // cout<<t<<endl;
  // t=t+1;
  // cout<<t<<endl;
  // cout<<*t<<endl; // when we chamge in t it doesn't work

  // int arr[10]={1,4,3,5,6,8,9};

  // cout<<*arr<<endl;
  // cout<<*arr+1<<endl;
  // cout<<*(arr+1)<<endl;

  //*************arr[i]=*(arr+i) and i[arr]=*(i+arr)***************************

  // int arr[10] = {1, 3, 4, 5};
  //  cout<<sizeof(arr[1])<<endl;
  // cout << sizeof(arr) << endl;

  // int *ptr=&arr[10];
  //  cout<<sizeof(ptr)<<endl;
  //  cout<<sizeof(*ptr)<<endl;

  //  int a[20]={1,2,3,4};
  //  cout<<&a[0]<<endl;
  //  cout<<sizeof(a)<<endl;
  //  cout<<a<<endl;

  // int arr[10] = {12, 3, 4, 6};
  //  arr= arr+1; // throw error
  //  cout << *arr + 1 << endl;

  // int *ptr = &arr[0];
  // ptr = ptr + 1;
  // cout << ptr << endl;

  //**********imp problems*****************8
  // int number[5];
  // int *p;
  // p = number;
  // *p = 10;
  // p = &number[2];
  // *p = 20;
  // p--;
  // *p = 30;
  // p = number + 3;
  // *p = 40;
  // p = number;
  // *(p + 4)=50;
  // for (int n = 0; n < 5; n++)
  // {
  //   cout << number[n] << " ";
  // }

  return 0;
}
