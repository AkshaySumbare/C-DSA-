#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displaying Base class varaible var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displaying Base class varaible var_base " << var_derived << endl;
        cout << "Displaying Derived class varaible var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // in C++ base class pointer can point
                                       /*   derived class object and it is permitted
                                            this is the guist of this lecture */
    base_class_pointer->var_base = 36;
    base_class_pointer->display();

    base_class_pointer->var_base=39;
    base_class_pointer->display();


    DerivedClass * derived_class_pointer;
    derived_class_pointer =&obj_derived;
    derived_class_pointer->var_base=65;
    derived_class_pointer->display();
    derived_class_pointer->var_derived=54;
    derived_class_pointer->display();


    return 0;
}
