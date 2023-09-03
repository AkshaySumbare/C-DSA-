#include<iostream>
using namespace std;

/* 
Class Templates with Multiple Parameteres (one,two or more than two)
syntax:
  template<class T1, class T2,.....(comma separated)>
  class nameofClass{
    //body
  }
*/

template<class T1,class T2>
class myClass{
    public:
      T1 data1;
      T2 data2;
      myClass(T1 a,T2 b){
        data1= a;
        data2= b;
      }
      void display(){
        cout<<this->data1<<endl<<this->data2<<endl;

      }
};

int main(){
    myClass<char,int> obj('c',15 ); // we can change here and get desireable output eg. flosat,
    obj.display();                   // ,char,int, etc.This fleexibility comes due to Templates 
    return 0;
}