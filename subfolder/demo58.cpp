#include <iostream>
using namespace std;

// *************Funcion Template & Function Templates with parameters

// float funcAverage(float a, float b)
// {
//     float avg = (a + b) / 2;
//     return avg;
// }

//****Same things with the help of template ************

template <class T1,class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2;
    return avg;
}
int main()
{
    float a;
    a = funcAverage(6, 10.77); //gives flexibility in varient ie ere we can do float, int etc.
    //                            to perform various data types 
    printf("The average of these two numbwer is %.2f", a);
    return 0;
}
