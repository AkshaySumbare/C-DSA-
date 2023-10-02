
#include <iostream>
using namespace std;

// default constructor -> is here ramesh.Hero()
//  we can give dynamic by Hero *h=new Hero();

//********Paramerterize Constructor********

// class Hero
// {
//     // Properties
// private:
//     int health;

// public:
//     char level;
//     Hero()
//     {
//         cout << "Constructor Called " << endl;
//     }
//     // Parameterized Constructor
//     Hero(int health)
//     { // here this is used to stop the confusion
//         cout << "This -> " << this << endl;
//         this->health = health; // this is used to store the current object adress
//     }

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

//     Hero ramesh(10);
//     cout << "Adress of ramesh " << &ramesh << endl;

//     return 0;
// }

//*****************Copy Constructor************
class Hero
{
    // Properties
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "simple constructor called " << endl;
    }

    // Parameterized Constructor
    Hero(int health)
    { // here this is used to stop the confusion

        this->health = health; // this is used to store the current object adress
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    // copy constructor
    Hero(Hero &temp)
    { // here we need to give pass by brefrence insted of pass by value becz to avoid infinite loop
        cout << "Copy Constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{

    Hero S(70, 'C');
    //     or
    //    Ram.setHealth(70);
    //    Ram.setLevel('C');

    // copy constructor
    Hero R(S); // copy the value of S into R
    R.print();

    return 0;
}

//*********Note******
// when we create any object the first thing happen is to  call the constructor
// default constructor create shallo copy -> we can acces same memory 

class Hero
{
    // Properties
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "simple constructor called " << endl;
    }

    // Parameterized Constructor
    Hero(int health)
    { // here this is used to stop the confusion

        this->health = health; // this is used to store the current object adress
    }

    Hero(int health, char level)
    {
        this->level = level;
        this->health = health;
    }
    // copy constructor
    

    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main()
{
   
   Hero hero1;
    Hero S(70, 'C');
    //     or
    //    Ram.setHealth(70);
    //    Ram.setLevel('C');

    // copy constructor
    Hero R(S); // copy the value of S into R
    R.print();
    

  

    return 0;
}
