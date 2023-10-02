#include <iostream>
using namespace std;

//********************** Destructor in  oops***********
// used to Destructor de-allocate memory // dstructor called when our object are outof scope ot there  life time end
// used to free memory it create automatically after the class create . can also we create
// Destructor name is same as the class name
// no return type as like constructor
// not parameter as like constructor

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

    //****************creating the destructor
    ~Hero()
    {
    cout <<"Destructor bhai called " << endl;
    }
};

int main()
{

    // Static
    Hero a;

    // Dynamic
    Hero *b = new Hero();
    delete b; // manually need to create destructor 

    return 0;
}


//********Notes-> For static object Default constructor automatically called 
// For Dynamic Destructor we need to create manually destructor eg. delete d
// As like constructor destructor also called only one time 
// when we create manually destructor then our automatically created destructor will be vanished 

