#include <iostream>
using namespace std;

/// *************Funcion Template & Function Templates with parameters
//****Swaping two varables using Templates********

template <class T>
void swaap(T &a, T &b)
{

    {
        T temp = a;
        a = b;
        b = temp;
    }
}

int main()
{
    int x = 6, y = 9;
    swaap(x, y);
    cout << "The value of x is " << x << endl
         << "The value of y is " << y << endl;

    return 0;
}
