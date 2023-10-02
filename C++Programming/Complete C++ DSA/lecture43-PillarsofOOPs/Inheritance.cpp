#include <iostream>
using namespace std;

// Intheritance->
//  eg. we have calss and we inheritat some property of this class into another class is called Inheritance
//  class in which other classes inherited some property is called parent class while those classes called subclasses
// helps to avoid repetations
/*
syntax->
    class parent_class{
      //Body of parent class
    };

    class child_class: access_modifier parent_class{
      //Body of child class
    };
   //  where modifier are ie. Modes of inheritance are public, private , protected

*/

//********Protected class***
// work as like private ie. we can access it into the protected class but one difference is in inheritance child
// class we can access it.

// class Human
// {

// protected:
//   int height;

// public:
//   int weight;

// public:
//   int age;

// public:
//   int getAge()
//   {
//     return this->age;
//   }
//   int setWeight(int w)
//   {
//     this->weight = w;
//   }
// };

// class Male : protected Human
// {
// public:
//   string col;
//   void sleep()
//   {
//     cout << "Male Sleeping " << endl;
//   }

// //2)protected access
// int getHeight(){
//   return this->height;
// }

// 3)private access
// int getHeight()
// {
//   return this->height;
// }

// 4)protected  public -> access
//   int getHeight()
//  {
//    return this->height;
//  }

// 5)protected  private -> access
//   int getHeight()
//  {
//    return this->height;
//  }

// 6)protected  protected -> access
// int getHeight()
// {
//   return this->height;
// }

// 7)private public -> not access
//    int getAge()
//  {
//    return this->height;
//  }

// //7)private private -> not access
//   int getAge()
// {
//   return this->age;
// }

// 7)private protected -> not access
//    int getAge()
//  {
//    return this->Age;
//  }
// };
// int main()
// {
// 1) public-> public->public
//  Male m1;
//  cout<<m1.height<<endl;

// 2) public->protected->can't access
// Male m1;
// cout<<m1.height<<endl;

// 2) now we can access
//  Male m1;
//  cout<<m1.getHeight()<<endl;

// 3) public->private-->private
//  Male m1;
//  cout<<age<<endl;

// 3) we can access in class
//   Male m1;
//   cout<<m1.getHeight()<<endl;

// 4) protected-> public-->not access
//  Male m1;
//  cout<<m1.getHeight<<endl;

// 5) protected ->protected ->protected
//  Male m1;
//  cout<<m1.Height<<endl;

// 6) protected ->private
//  Male m1;
//  cout<<m1.Height<<endl;

// 7) private->public ->not access
// 8) private-> private-> no access
// 9) private-> protected-> no access
//  Male m1;
//  cout<<m1.height<<endl;

/*
Male object1;
cout << object1.age << endl; // here male inherited human
cout << object1.weight << endl;
cout << object1.height << endl;

object1.sleep();
object1.setWeight(85);
cout << object1.weight << endl;
*/

//   return 0;
// }

//****Mode of inheritance *****
/*

   Super Class       Sub Class

 1) public           public       ---> public

 2) public           private      ---> private

 3) public           protected    ----> protected

 4) protected        public       -----> protected

 5) protected        private      ------>private

 6) protected       protected      ------>private

 7) private        public         ----> Not accessible

 8) private       private         ---> Not Accessible

 9) private       protected        ----> Not Accessible

//Private Data member of any class  cant  inherited


*/

//*****************Types of Inheritance*************
// types: Single, Multi-level , Multiple, Hybrid, Heirarachial

// 1)-Single Inheritance -> A ---> B eg. Human class-> Male class above example is the eg. of single inheritance

// 2)-**********************Multilevel inheritance-> A-->B--->C-->D-->E......*************
// eg.
//  class Animal{
//    public:
//     int age;
//     int weight=15;

//     public:
//     void speak(){
//       cout<<"Speaking "<<endl;
//     }

//  };

//   class dog:public Animal{

//   };

//   class GermanShepard: public dog{

//   };
//   int main(){

//     GermanShepard g;
//     g.speak();
//     cout<<g.weight<<endl;

//     return 0;
//   }

// 3)***********************Multiple inheritance*********************
//  class A
//             class c  which is create from both A and B
//  class B

// class Animal
// {
// public:
//   int age;
//   int weight = 15;

// public:
//   void bark()
//   {
//     cout << "Barking " << endl;
//   }
// };

// class Human
// {
// public:
//   string color;

// public:
//   void speak()
//   {
//     cout << "Speaking " <<endl;
//   }
// };
// // multiple Inheritance

// class Hybrid : public Animal, public Human
// {
// };
// int main()
// {

//   Hybrid obj1;
//   obj1.speak();
//   obj1.bark();

//   return 0;
// }

// 4)****************Hericharcial Inheritance**************
// in this case one class serve as Parent class for more than one class
//              class B
//  class A
//             class c

// Hericharical Inheritance
// class A
// {
// public:
//   void fun1()
//   {
//     cout << "Inside Function 1" << endl;
//   }
// };

// class B : public A
// {
// public:
//   void fun2()
//   {
//     cout << "Inside Function 2" << endl;
//   }
// };

// class C : public A
// {
// public:
//   void fun3()
//   {
//     cout << "Inside the function 3 " << endl;
//   }
// };

// int main()
// {

//   A object1;
//   object1.fun1();

//   B object2;
//   object2.fun1();
//   object2.fun2();

//   C object3;
//   object3.fun1();
//   object3.fun3();

//   return 0;
// }

//**********Hybrid***********
// combination of more than one type of Inheritance
// eg . combination of multiple and multilevel

// class A
// {
// public:
//   void fun1()
//   {
//     cout << "Inside the function 1" << endl;
//   }
// };
// class D
// {
// public:
//   void fun2()
//   {
//     cout << "Inside the function 2" << endl;
//   }
// };
// class B : public A
// {
// public:
//   void fun3()
//   {
//     cout << "Inside the function 3" << endl;
//   }
// };
// class C : public A, public D
// {
// public:
//   void fun4()
//   {
//     cout << "Inside the function 4" << endl;
//   }
// };

// int main()
// {

//   A obj1;
//   obj1.fun1();

//   B obj2;
//   obj2.fun1();
//   obj2.fun3();

//   C obj3;
//   obj3.fun1();
//   obj3.fun2();
//   obj3.fun4();

//   D obj4;
//   obj4.fun2();

//   return 0;
// }

//*************Inheritance Ambiguity*************
// where conside we have multiple inheritance where class c is inheriate from class A and class B and let us consider
// we have fun of "abc" in A and same name function in "B"  so at the time of calling in c that will be crater
// Ambiguty for C this is called Inheritance Ambiguity
// solution -----> Scope Resolution operator

class A
{
public:
  void func()
  {
    cout << "Inside the A" << endl;
  }
};

class B
{
public:
  void func()
  {
    cout << "Inside the B" << endl;
  }
};

class C : public A, public B
{
};

int main()
{

  C obj;
 // obj.func();

 // to resolve this ambiguity 
 obj.A::func();
 obj.B::func();

  return 0;
}
