#include <iostream>
using namespace std;

//*************power of number by using recursion************

int power(int a, int b)
{

    //*****************Simple method**************
    // int ans=1;
    // for (int i = 0; i <b; i++)
    // {
    //     ans=ans*a;
    // }
    // return ans;

    //************Recursive method************
    // base case
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }
    // Receusive call
    int ans = power(a, b / 2);
    cout << ans << endl;

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cout << "Enter the vaue of a and b " << endl;
    cin >> a >> b;

    int ans = power(a, b);

    cout << ans << endl;

    return 0;
}