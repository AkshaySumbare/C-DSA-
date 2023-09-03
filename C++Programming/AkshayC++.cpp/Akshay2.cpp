#include <iostream>
#include <math.h>
using namespace std;

//****************Functions in C++*************
/*functions use to avoide repetative code in C++,Functions is a piece of code that
performs specific task
Syntax of function
returnType functionName(parameter1,parameter2,.....){
 //function Body
}

only name of variable are passed and not their type while calling a function.

*/
// void print(int num)
// {
//     cout << num << endl;
//     return;
// }
// int add(int num1, int num2)
// {
//     print(num1);
//     print(num2);
//     int sum = num1 + num2;
//     return sum;
// }
// int main()
// {
//     int a = 2;
//     int b = 7;
//     cout << add(a, b) << endl;

//  return 0;
// }

// eg. Finding prime numbers between any two numbers by using functions

// bool isPrime(int num)
// {
//     for (int i = 2; i < sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i))
//         {
//             cout << i << endl;
//         }
//     }

//     return 0;
// }

// eg. factorial of no using functions

// int fact(int n)
// {
//     int factorial = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     int ans = fact(n);
//     cout << ans << endl;
//     return 0;
// }

//------nCr uding functions in C++
// int fact(int n)
// {
//     int factorial = 1;
//     for (int i = 2; i <= n; i++)
//     {
//         factorial *= i;
//     }
//     return factorial;
// }

// int main()
// {

//     int n, r;
//     cin >> n >> r;

//     int ans = fact(n) / (fact(r) * fact(n - r));
//     cout << ans << endl;
//     return 0;
// }

//to find pythagorus Triplates using functons in c++;

bool check(int x, int y, int z)
{
    int a = max(a, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
        return true;
    else
        return false;
}
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagorean triplates " << endl;
    }
    else
    {
        cout << "Not an pythagorean triplates " << endl;
    }
}
