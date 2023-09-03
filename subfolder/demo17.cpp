#include <iostream>
using namespace std;
// int "struct" we cant hide any relevant information thats why data have no strong security
// thats why we need the classes;eg .banking information ,etc;
// we cant add function in "struct " while added in clases;

class Employee
{ 

private:
   int a, b, c;

public:
   int d, e;
   void setData(int a1, int b1, int c1); // Decleration
   void getData()
   {
      cout << "the value of a is " << a << endl; // we can also declared  setdata in this function but due to complexity we declaerd it later on
      cout << "the value of b is " << b << endl;
      cout << "the value of c is " << c << endl;
      cout << "the value of d is " << d << endl;
      cout << "the value of e is " << e << endl;
   }
};
void Employee ::setData(int a1, int b1, int c1)
{
   a = a1;
   b = b1;
   c = c1;
}

int main()
{  
   Employee Akshay;
   // Akshay.a=88; here due to private variable a, b,c we cant change it and if we try o change it i will show error.
   // Akshay.b==79;
   // Akshay.c=76;
    
   Akshay.d = 45;
   Akshay.e = 60;
   Akshay.setData(5, 7, 9);
   Akshay.getData();

   return 0;
}