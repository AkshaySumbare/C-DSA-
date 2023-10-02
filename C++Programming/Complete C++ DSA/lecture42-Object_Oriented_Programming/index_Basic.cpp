#include <iostream>
using namespace std;

/*
 Access Modfiers types :-
                     1-public
                     2- Private
                     3- Protected


  // By default our access modifier is private
  // public modifoer used to access the data member or functios in class as well as outside of the class
  // private modifier can only access within the class




*/

// class Hero
// {
//     // Properties
//     public:
//     int health;
//     char level;

//     void print(){
//         cout << "level is: " <<level << endl;
//     }
// };
// int main()
// {
//     // creation of Object
//     Hero ramesh;

//     ramesh.health=70;
//     ramesh.level='A';

//     // using dot operator we can access this

//     cout << "health is: " << ramesh.health << endl;
//     cout << "level is: " << ramesh.level << endl;

//     return 0;
// }

//*********Getter && Setters****************
// used to access private datatypes

// class Hero
// {
//     // Properties
//     private:
//     int health;
//     public:
//     char level;

//     void print(){
//         cout << "level is: " <<level << endl;
//     }

//    int getHealth(){
//     return health;
//    }

//    char getLevel(){
//     return level;
//    }

//    void setHealth(int h){
//          health =h;
//    }
//    void setLevel(char ch){
//     level=ch;
//    }
// };
// int main()
// {
//     // creation of Object
//     Hero ramesh;

//     cout<<"Ramesh health is "<<ramesh.getHealth()<<endl;
//    // ramesh.health=70;

//    //use of setter
//     ramesh.setHealth(70);
//     ramesh.level='A';

//     // using dot operator we can access this

//    // cout << "health is: " << ramesh.health << endl;
//     cout << "health is: " << ramesh.getHealth() << endl;
//     cout << "level is: " << ramesh.level << endl;

//     return 0;
// }

//****************Dynamic allocation*****************

// class Hero
// {
//     // Properties
// private:
//     int health;

// public:
//     char level;

//     void print()
//     {
//         cout << "level is: " << level << endl;
//     }

//     int getHealth()
//     {
//         return health;
//     }

//     char getLevel()
//     {
//         return level;
//     }

//     void setHealth(int h)
//     {
//         health = h;
//     }
//     void setLevel(char ch)
//     {
//         level = ch;
//     }
// };
// int main()
// {
//     // static allocation
//     Hero a;
//     a.setHealth(80);
//     a.setLevel('B');
//     cout << " level is " << a.level << endl;
//     cout << "Health is " << a.getHealth() << endl;

//     // dynamically created hero
//     Hero *b = new Hero;
//     b->setLevel('A');
//     b->setHealth(70);
//     cout << " level is " << (*b).level << endl;
//     cout << "Health is " << (*b).getHealth() << endl;

//     // Alternative methodology of dynamic allocatons 
//     cout << " level is " << b->level << endl;
//     cout << "Health is " << b->getHealth() << endl;

//     return 0;
// }


