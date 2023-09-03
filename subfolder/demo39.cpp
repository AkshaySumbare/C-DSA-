#include <iostream>
using namespace std;

//**********Ambiguity resolution in inheritance*********

class Base1
{
public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho? " << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;
    public:            // to resolved the ambiguity need to defined such way 
      void greet()   // This is called as ambiguity resolution 
    {
        Base1::greet();
    }
};
int main()
 {  //Ambiguity 1 
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived d; // Derved d;
    d.greet(); // d.greet();  // Not run and show " greet" is ambiguous ie. function is cnfused
               // from where to take input class 1or class2 so to avoie this we need
               // to defined it in class derived ie we done now in above ie.
                /*public:
                 void greet(){
                 Base1::greet();
           }  */

  
   
  return 0;
  }