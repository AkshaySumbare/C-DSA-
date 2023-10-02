#include <iostream>
using namespace std;

//*************STatic Function************
// Same no need to create Object to access
// no "this" keyword  // this keyword is the pointer to current object
// it can olny access static member

class Hero
{
    // Properties
private:
    int health;

public:
    char level;
    // Static Member
    static int timeToComplete;

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

    //****************creating the destructor
    ~Hero()
    {
        cout << "Destructor bhai called " << endl;
    }

    // creating static function
    static int random()
    {
        return timeToComplete;
    }
};

int Hero::timeToComplete = 5;

int main()
{

    cout << Hero::random() << endl;

    return 0;
}