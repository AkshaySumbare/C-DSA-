#include <iostream>
#include <cmath>
using namespace std;

//*********Switch Statements *********
// helps to optimize the code

// int main()
// {
// int num = 2;
// cout << endl;
// switch (num)
// {
// case 1:
//     cout << "First " << endl;
//     break;

// case 2:
//     cout << "Second " << endl;
//     break;

// default:
//     cout << "It is default case " << endl;
// }

// char ch='1';
// cout << endl;
// switch (ch)
// {
// case 1:
//     cout << "First " << endl;
//     break;

// case '1':  // means it compare with case and then show the output
//     cout << "Second " << endl;
//     break;

// default:
//     cout << "It is default case " << endl;
// }

//*********Example of switch in switch *******

// char ch = '1';
// int num = 1;
// cout << endl;
// switch (ch)
// {
// case 1:
//     cout << "First " << endl;
//     break;
//  case '1':switch (num){
//         case 1:
//           cout << "value of num is " << num << endl;
//            break;
//         }
//         cout << "Second " << endl;
//         break;

//     default:
//         cout << "It is default case " << endl;
//     }

//**********Continue*******
// use of continue in switch is not valid

// // using switch case statements make an calculator
// int a, b;
// cout << "Enter the value of a  " << endl;
// cin >> a;
// cout << "Enter the value of b  " << endl;
// cin >> b;

// char op;
// cout << "Enter the operation you want to perform " << endl;
// cin >> op;

// switch (op)
// {
// case ('+'):
//     cout << "a+b is " << a + b << endl;
//     break;
// case ('-'):
//     cout << "a-b is " << a - b << endl;
//     break;
// case ('*'):
//     cout << "a*b is " << a * b << endl;
//     break;
// case ('/'):
//     cout << "a/b is " << a / b << endl;
//     break;

// case ('%'):
//     cout << "a%b is " << a % b << endl;
//     break;

// default:
//     cout << "please enter the valid operation " << endl;
//     break;
// }

// // problem of how many notes are needed to

//  int num;
//  cout<<"Enter the value of rupees  "<<endl;
//  cin>>num;

//   switch (num)
//   {
//   case 'num'/100;
//     cout<<
//     break;

//   default:   // not working do something whenever get time;
//     break;
//   }

//**********************Functions in C++**************
// functions are used to reduce the compatibality if program

//   int a ,b;
//   cin>>a>>b;
//   cout<<pow(a,b)<<endl;

//     int a, b;
//     cout << "Enter the value of a and  b " << endl;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     cout << "answer is " << ans << endl;

//     return 0;
// }

//******* same problem we can do using function very simple way********

// int power(int num1, int num2){
//     int ans= 1;
//     for (int  i = 1; i <=num2; i++)
//     {
//         ans= ans*num1;
//     }
//     return ans;
// }
// int main(){
//   int a , b;
//   cin>>a>>b;

//    int answer=power(a,b);
//    cout<<answer<<endl;

//   return 0;
// }

// ex of finding the given number is odd or even by using functions

// bool isEven(int a)
// {
//     if (a & 1)
//     {
//         return 0;
//     }
//     return 1; // or else and the return both are same
// }

// int main()
// {
//     int num;
//     cin >> num;

//     if (isEven(num))
//     {
//         cout << "Number is even " << endl;
//     }
//     else
//     {
//       cout<<"number is odd "<<endl;
//     }

//     return 0;
// }

//*********nCr using functions*********

// int factorial(int n)
// {
//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
// }
// int nCr(int n, int r)
// {
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);
//     int ans = num / denom;
//     return ans;
// }

// int main()
// {
//     int n, r;
//     cin >> n >> r;
//     cout << "Answer is " << nCr(n, r) << endl;
// }

//*****Counting using function*******
// whenever my function not return an output at that time we used "void " keyword ie. function doent return
// anything

// function signature
//  void printCounting(int n)
//  {   // Function body
//      for (int i = 1; i <= n; i++)
//      {
//          cout << i << endl;
//      }
//  }

// int main()
// {
//     int n;
//     cout << " Enter the value of n " << endl;
//     cin >> n;
//     // Function call
//     printCounting(n);

//     return 0;
// }

// using function is given number is prime or not
// 1-> Prime no
// 2-> Not a Prime no
// int isPrime(int n)
// {

//     for (int i = 2; i < n; i++)
//     { // divide then not a prime
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main()
// {

//     int n;
//     cout << "Enter the number n " << endl;
//     cin >> n;

//     if (isPrime(n))
//     {
//       cout<<"is a prime number "<<endl;

//     }
//      else{
//       cout<<" is not a prime number "<<endl;
//       }

//     return 0;
// }

//*************** Notes : sequence of function *************
// 1- return type eg. int , float, void ie. contain any data type
// 2- function name-> here we gives input , argumnts , Parameters not mendetary
// 3- curly bracket -> function body
// 4- main body

//************Function call Stack***********
// it means sequence of code which go inside the stack and then again go outside the stack
// eg . in above fatorial example firstly stack full with the sequence main function ->nCr->factorial after again
// empty by the sequence of factorial return value->nCr return value->main return value ie. output

//*******Arithmatic Progression by using functions

// int AP(int n){
//    int ans =3*n +7;
//    return ans;
// }

// int main(){

//  int n;
//  cout<<"Enter the value of n "<<endl;
//  cin>>n;

//   cout<<AP(n)<<endl;

//  return 0;
// }

//*********Fabician series by using functions ********
// void Series(int n)
// {
//     int f[n];
//     int i;
//     f[0] = 0;
//     f[1] = 1;
//     for (int i = 2; i < n; i++)
//     {
//         f[i] = f[i - 1] + f[i - 2];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << f[i] << " ";
//     }
// }

// int main()
// {

//     int n;
//     cout << "Enter the value of n " << endl;
//     cin >> n;

//     Series(n);

//     return 0;
// }

//**********Pass by values********

// void dummy(int n)
// {
//     n++;
//     cout << "n is " << n << endl;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     dummy(n);

//     cout << "number n is " << n << endl;

//     return 0;
// }
// here the output is 16, and 15 if we give input 15 becz. dummy n is a copy of int n so it is not same
// so here we not passing n of main function we just passing copy of n . ie. Storage also not same .
// this is called passed by value.

//*********concept based programm learned by this video*********

// void update(int a)
// {
//     a = a / 2;
// }

// int main() // here output will same as input becz. here void is used ie. function not doing anything
// {

//     int a = 10;
//     update(a);

//     return 0;
// }

// int update(int a)
// {
//     a -= 5;
//     return a;
// }

// int main()
// {
//     int a = 15; // here also output not change becz function data type is int so due to this we need to write it
//     update(a);  // as like cout<<update(a)<<endl; it is opposite to void function in case of void  need of update(a)
//     cout << a << endl;
//      return 0;
// }

// int update(int a)
// {

//     int ans = a * a;
//     return ans;
// }

// int main()
// {
//     int a = 14;
//     a = update(a);
//     cout << a << endl;

//     return 0;
// }

