#include <iostream>
using namespace std;

//*************************Polymorphism*******************
/*
   meaning-> existing many forms
   eg. father and his relations

   Types-> Compile time Polymorphism
           Run-Time Polymorphism


*/

// ***********1) Compile time Polymorphism ->********** in this we have idea or we know about how things are exits
// in different forms
//  Types--> a) function Overloading
//            b) Operator overloading  // means new form of operator

//*********************a)Function Overloading****************
//  also called static Polymorphism
// No of arguments need to change for same function and then we can use
// class A{
//     public:
//     void sayHello(){
//         cout<<"Hello love Babbar 1 "<<endl;
//     }

//     int sayHello(string A){   // just because of changing the datatype we cant overload the function
//         cout<<"Hello love Babbar 2 "<<endl;
//     }
//     void sayHello(int a){   // change the signature
//         cout<<"Hello love Babbar 3"<<endl;
//     }
// };

// int main(){
//    A object1;
//    object1.sayHello(); // to overcome this we need to change the signature

//     return 0;
// }

//************b)operator Overloading**********
//

// class B{
//     public:
//     int a;
//     int b;

//     // public:
//     // int add(){

//     //     return a+b;

//     // }

//     void operator+ (B &obj){
//         int value1= this->a;
//         int value2= obj.a;
//         cout<<"Output "<<value2-value1<<endl;
//     }

//    // '-' overloadng
//     void operator- (B &obj){
//         int value1= this->a;
//         int value2= obj.a;
//         cout<<"Output "<<value2*value1<<endl;
//     }

//     //bracket overloading

//     void operator() () {
//         cout<<"mai bracket hu "<<this->a<<endl;
//     }
// };

// int main(){

//    B obj1, obj2;

//    obj1.a =4;
//    obj2.a =7;

//    obj1 + obj2;
//    obj1-obj2;

//    obj1();

//     return 0;
// }

//***********************2) Run time Polymorphism***********
// also called dynamic polymorphism
// same things but different implementation eg. function in which property is singing but for dog fun same but
// instead of singing there is barking called Method overriding

// conditions
// 1)the method of parent class and method of the child class must have the same name;
// 2) --||-- same parameter/argument
// 3) it is possible through inheritance only.

// example of run time polymorphism same function name , same parameter but different method
class Animal
{

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl; // our own implementation 
    }
};

int main()
{
     Dog obj;
     obj.speak();// implement Barking 


    return 0;
}