#include <iostream>
using namespace std;

//**********Overloading Templates 

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << "I am template first(i) func() " << a << endl;
}

template <class T>
void func2(T a)
{
    cout << "I am template first(ii) func() " << a << endl;
}
int main()
{

    func(5);  // Exact match takes the highest priority means if same name two
    func1(8);
    return 0; // two variable here id "func".
}