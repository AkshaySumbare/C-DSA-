#include <iostream>
using namespace std;

//*****************************Recursion**************************************
// According to book when function calls itself directly or indirectly is called Recursion
// Base Case -> help to when we stop eg. 5!=5x4!->5x4x3!->5x4x3x2!->5x4x3x2x1!->5x4x3x2x1x0!->here we stop at 0! we
// it is 1 so here 0! is base case
// eg. of Recursive Relation.
// 5!=5x4!
// f(n)=nxf(n-1)
// ib Recursion Base case and recursive relation mandatory
// in base case it is mandatory to write  return .

// flow of recursive function

//    fun(){

//      base case

//      process
//      eg. add,print etc.


//      recursive relation
//    }

// when recursive relation present or come above the  process  we called as head Recursive. and when come under the
// process called Tail Recursive



// int factorial(int n)
// {

//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }

//     //   int smallerProblem=factorial(n-1);  // f(n)=F(n)*f(n-1) -> here smaller prob is to calc. f(n-1) and bigger is
//     //   int biggerProblem=n*smallerProblem;  // to calc. f(n)

//     //   return biggerProblem;

//     return n * factorial(n - 1);
// }

// int main()
// {

//     // eg of factorial

//     int n;
//     cout << "Enter the value of n " << endl;
//     cin >> n;

//     int ans = factorial(n);

//     cout << ans << endl;

//     return 0;
// }

//******************another example******************
// 2^n =2x2^n-1
// f(n) =2xf(n-1) here f(n-1) as smallproblem while f(n) is bigproblem

// int power(int n)
// {

//     // base case
//     if (n == 0)
//     {
//         return 1;
//     }

//     // recursive relation
//     //    int smallProblem= power(n-1);  // thus write just to understand
//     //    int bigProblem= 2*smallProblem;
//     //    return bigProblem;

//     return 2 * power(n - 1);
// }

// int main()
// {

//     int n;
//     cout << "Enter the value of n " << endl;
//     cin >> n;

//     int ans = power(n);
//     cout << ans << endl;

//     return 0;
// }

//********************Counting example*****************

void print(int n){
    
    //base case 
    if (n==0)
    {
        return ;
    }
    
   cout<<n<<endl;
   // Tail recursive function becz process ie. count is above the recursive function
   print(n-1);

   
   print(n-1);
   // head recursive function 
   cout<<n<<endl;

}

int main(){

   int n;
   cout<<"Enter the value of n "<<endl;
   cin>>n;
   cout<<endl;
   print(n);



    return 0;
}