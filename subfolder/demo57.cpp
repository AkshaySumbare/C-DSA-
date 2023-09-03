#include<iostream>
using namespace std;
//**********Class template with Default **********
template <class T1=int, class T2=float, class T3=bool>  // This is a default data type 
class Akshay{
      public:
       T1 a;
       T2 b;
       T3 c;
       Akshay(T1 x, T2 y, T3 z){
        a =x;
        b =y;
        c =z;
       }
       void display(){
        cout<<" The value of 'a' is "<<a<<endl;
        cout<<" The value of 'b' is "<<b<<endl;
        cout<<" The value of 'c' is "<<c<<endl;
       }
};
int main(){
    Akshay<> A(4,  6.4, 4>3);  // ths
    A.display();
    cout<<endl;

    Akshay<float,char, int> b(4.1 , 'A', 7); // in this way we can change the vale here also 
    b.display();                             // 
    cout<<endl;
    return 0;
}