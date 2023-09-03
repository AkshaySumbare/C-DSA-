
#include <iostream>
using namespace std;

//********Function overloading*********
// means one name of function do many works
// Function overloading is a feature of object-oriented programming where two or more functions
// can have the same name but different parameters. When a function name is overloaded
// with different jobs it is called Function Overloading. In Function Overloading “Function”
//  name should be the same and the arguments should be different. Function overloading
//  can be considered as an example of a polymorphism feature in C++.
/*

int multi(int a, int b){
 cout<<"Using with 2 arguments "<<endl;  // 2 is just given to understand.
 return a*b;
}

int sum( int a, int  b, int c){
 cout<<"Using function with two arguments "<<endl;
 return a+b+c;

}

int main(){

cout<<"The multi of 2 and 3 is "<<sum(2 , 3,7 )<<endl;
cout<<"The sum of 2 and 3 and 6 is "<<sum(2,3,6)<<endl;




   return 0;
} */

// *************Overloaded functions**********

// float volume(int r, int h)
// {
//   return (3.14 * r * r * h);
// }

// int Area(int b, int h)
// {
//   return (0.5 * b * h);
// }

// int main()
// {

//   cout << "The volume of the given cylinder of radius 5 and height 7 is " << volume(5, 7) << endl;
//   cout << "The area of the given traiangle of base 6 and height 8 is " << Area(6, 8) << endl;
//   return 0;
// }

//**********This is the real example of variable overloading********

// void add(int a, int b)
// {
//   cout << "Sum " << a + b << endl;
// }

// int add(double a, double b)
// {
//   cout << "Sum " << a + b << endl;
// }

// int main()
// {
//   add(10, 6);
//   add(4, 6);

//   return 0;
// }