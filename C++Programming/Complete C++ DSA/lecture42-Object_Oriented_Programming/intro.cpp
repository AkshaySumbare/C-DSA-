#include <iostream>
#include "Hero.cpp" // to include another file
using namespace std;

// OOPs is a programming technique or a paradyime wherer oue things are oriented with object or revolves with object
// why OOPs-> to enhance our reaibility , to close our program to real world, also to enhance the managibility
//  eg-> game

// object-> is a entity which has certain properties and behavoirs
// class-> It is a user defined Datatype
// eg. class of hero
// class Hero{   // creating the class
//    //propertire
//    int health;

// };
// // note if we have create empty class then the size of that class is 1 bit becz to just for identity
// int main(){
//     //making an object of class
//     Hero h1;  // making hero type object
//    cout<<"Size: "<<sizeof(h1)<<endl;

//     return 0;
// }

//********************one file to another**********

int main()
{
    // making an object of class
    Hero h1; // making hero type object
    cout << "Size: " << sizeof(h1) << endl;

    return 0;
}
