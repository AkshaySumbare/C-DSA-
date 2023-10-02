#include <iostream>
using namespace std;

//************Static Keyword ********
// Static Keyword creatr a Data member which belong to class , we no need to crate Object for accessing it

class Hero
{
    // Properties
private:
    int health;

public:
    char level;
    // Static Member
    static int timeToComplete; // it is indeopendent to hero not depend

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

    ~Hero()
    {
        cout << "Destructor bhai called " << endl;
    }
};

 // access of static 
 // syntax -> datatype classname :: fieldname = value;
 int Hero::timeToComplete =5;


 int main(){
    
    cout<<Hero::timeToComplete<<endl; // we accessing without creating the Object 


    return 0;
 }