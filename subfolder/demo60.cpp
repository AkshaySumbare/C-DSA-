#include<iostream>
using namespace std;

//**************Member fuction tmplates & Overloading Template function in C++***********

template<class T>
class Akshay{
  public:
   T data;
   Akshay(T a){
        data = a;
   }
   void display();
};
 template<class T>    // in this way we can defined function out of class no need 
 void Akshay<T>:: display(){  // To defined always inline the class 
    cout<<data<<endl;  
 }
int main(){
    // Akshay<float>A(5.8);
    // cout<<A.data;
    Akshay<int>h(87);
    cout<<h.data<<endl;
    h.display();
    return 0;
}