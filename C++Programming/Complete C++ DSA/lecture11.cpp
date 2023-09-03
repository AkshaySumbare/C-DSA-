#include<iostream>
using namespace std;

//*********Time and Space complexity*************
/*
2) Time complexity- it is the amount of time takrn by an algorithm to run as a function of length of the input
why need of Time complexity- better solution.
notation we used here is -> Big O 

1-constant time -> O(1) -> eg. for(int i=0; i<=10; i++){
                              cout<<"hellow "<<endl;
                                                   }
means here we get 10 time hellow and which is constant not change hence called O(1);

2-linear time -> O(n) -> same above example but value of i is n and so it goes by linear way 


3-Quadratic time -> O(n^2)) -> eg. let we have run loop in loop ie. nested loop . then O(n)*O(n)=O(n^2)
Note- at the time of two loop no nested we add O(N) +O(N) =O(N+M) so.ie in case of nrsted multiply and othe 
two add 

4-Cubic time-> O(n^3) -> 3 for loop still n in loop in loop 

Logarithmatic time -> O(logn)

Decerasing order of an time complexity 
O(n!)>>O(2^N)>>O(N^3)>>O(N^2)>>O(NlogN)>>O(N)>>O(logN)>>O(1)

in example we have given the constyraint then by thus we have use the appropriate methid in order to our TLE  
or complexity will correct 
sequence 

1-[10,11]-> O(n!), O(n^6)
2-[15...18]->O(2^n * n^2)
3-100-> O(n^4)
4-400-> O(n^4)
5- 2000->O(n^2 8 logn)
6- 10^4 ->O(n^2)
7- 10^6 ->O(nlogn)
 this implies that if our eg. constraint is 10^4 we can use all logic who's time complexity is greater than
 10^4 but if we used less than show not perfect solution and show TLE 


*/

/* 2)***********Space complexity ***********
  Space complexity-it is the amount of memory taken by an algorithm to run as a function of length of the input
 eg. int a, int b,...... space complexity means variable here  a and b is there so the space complexity is O(1)
  ie. constant we shout know that no matter how many variables are there the space complexity is constant ie. O(1)
  // in this case any loop not taken memory onlt taken time so dont judge by loop the Space Complexity 


*/
int main(){
    
    return 0;
}