#include <iostream>
using namespace std;

//************Virtuals functions in C++**********

class BaseClass
{
public:
    int var_base = 1;
    virtual void display() //  now if pointer of base class point the derived class object
    {                      // then run his display not my and this is the work of virtual function
                           // without virtual itshows own display pointer
        cout << "1 Displaying Base class varaible var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Displaying Base class varaible var_base " << var_derived << endl;
        cout << "3 Displaying Derived class varaible var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived; // despite being pointer derived the "derived class"
    base_class_pointer->display();     // still it shows output of base class becz it is default
    return 0;                          // so to change this behaviour we have a "virtual function"
}