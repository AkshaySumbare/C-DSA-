#include <iostream>
using namespace std;

// double pointer in C++

// int main(){

//     int i=5;
//     int *ptr=&i;
//     int **ptr2=&ptr;

//     cout<<ptr<<endl;
//     cout<<*ptr2<<endl;
//     cout<<i<<endl;
//     cout<<*ptr<<endl;
//     cout<<**ptr2<<endl;

//     return 0;
// }

// int main()
// {

//     int i = 5;
//     int *p = &i;
//     int **p2 = &p;

//     cout << i << endl;
//     cout << *p << endl;
//     cout << **p2 << endl;

//     cout << endl;
//     cout << endl;

//     cout << &i << endl;
//     cout << p << endl;
//     cout << *p2 << endl;

//     return 0;
// }

// int main()
// {

//     int first = 8;
//     int *p = &first;
//     cout << (*p)++ << " " << endl;
//     cout << first << endl;

//     return 0;
// }

// int main()
// {

//     int *p = 0;
//     int first = 110; // segmentation problem
//     *p = first;
//     cout << *p << endl;

//     return 0;
// }

// int main()
// {
//     float f = 12.5;
//     float p = 21.5;
//     float *ptr = &f;
//     (*ptr)++;
//     *ptr = p;
//     cout << *ptr << " " << f << " " << p << endl;

//     return 0;
// }

// int main(){

//     int arr[6]={11,21,31};
//     int *p=arr;
//     cout<<*(p+2)<<endl;
//     cout<<p[2]<<endl;

//     return 0;
// }

// int main(){

//     int arr[]={11,21,31,41};
//     int *ptr=arr++;  //not working
//     cout<<*ptr<<endl;
//     return 0;
// }

// void update(int *p){
//     *p=(*p)*2;
// }

// int main(){
//    int i=10;
//    update(&i);
//    cout<<i<<endl;
//     return 0;
// }

// int main(){

//   int first=110;
//   int *p=&first;
//   int **q=&p;
//   int second=(**q)++ +9;
//   cout<<first<<" "<<second<<endl;
//     return 0;
// }

// void increment(int **p)
// {
//     ++(**p);
// }

// int main()
// {

//     int num = 110;
//     int *ptr = &num;
//     increment(&ptr);
//     cout << num << endl;
// }

