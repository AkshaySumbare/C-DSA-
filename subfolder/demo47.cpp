#include <iostream>
using namespace std;

//***********This pointer in C++********
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    // "this " is a keyword is a pointer which points to the objects which is
    // invoks the member function
    A a;
    a.setData(4);
    a.getData();
    return 0;
}