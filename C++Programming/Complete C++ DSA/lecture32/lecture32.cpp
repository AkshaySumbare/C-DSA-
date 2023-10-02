#include <iostream>
using namespace std;

// if we not write the base condition then our stack will be full

// void reachHome(int nowpresent, int destination)
// {
//     cout <<"nowpresent "<< nowpresent << " destination " << destination << endl;

//     // base case
//     if (nowpresent == destination)
//     {
//         cout << "destination has been arrived  " << endl;
//         return;
//     }

//     // processing
//     nowpresent++;
//     // recursive call
//     reachHome(nowpresent, destination);
// }

// int main()
// {

//     int destination = 10;
//     int nowpresent = 1;

//     cout << endl;
//     reachHome(nowpresent, destination);

//     return 0;
// }

//************Fibonnacci series sum using recursive method ****************

// int fib(int n)
// {
//     // base case
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     //recursive call
//     int ans = fib(n - 1) + fib(n - 2);
//     return ans;
// }

// int main()
// {

//     int n;
//     cout << "Enter the value of n " << endl;
//     cin >> n;

//     cout << fib(n) << endl;

//     return 0;
// }

  int  Fibanochhi(int n){
    // base case 
    if (n==0)
    {
        return 0;
    }
    
    if (n==1)
    {
       return 1;
    }
    
    //Recursive call
    int ans= Fibanochhi(n-1)+Fibanochhi(n-2);
    return ans;

  }

  


  int main(){
   int n;
   cin>>n;

   cout<<Fibanochhi(n)<<endl;


    return 0;
  }



//*****************eg1)Count Ways To Reach The N-th Stairs*************
// coding ninja example see for statement
// how many ways to climb on stairs you can either 1 or 2  steps climb at a time

// int countDistinctWayToClimbStaris(long long nstaris)
// {

//     // base case
//     if (nstaris < 0)
//     {
//         return 0;
//     }

//     if (nstaris == 0)
//     {
//         return 1;
//     }

//     // Recursive Call
//     int ans = countDistinctWayToClimbStaris(nstaris - 1) + countDistinctWayToClimbStaris(nstaris - 2);

//     return ans;
// }

// int main()
// {

//     int n;
//     cin >> n;

//     cout << countDistinctWayToClimbStaris(n) << endl;
//     return 0;
// }

//*********************

// void saydigit(int n, string arr[])
// {
//     // base case
//     if (n == 0)
//     {
//         return;
//     }

//     // processing
//     int digit = n % 10;
//     n = n / 10;

//     // recursive call
//     saydigit(n, arr);

//     cout << arr[digit] << " ";
// }

// int main()
// {

//     string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     int n;
//     cout << " Enter the value of n " << endl;
//     cin >> n;

//     saydigit(n, arr);

//     return 0;
// }

  


  