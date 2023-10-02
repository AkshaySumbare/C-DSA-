#include <iostream>
using namespace std;

//*****************checkPalindrome using recursion***********

// bool checkPalindrome(string str, int i) // also by using j=str.length()-1
// {
//     // base case
//     if (i > str.length() - i - 1) /// mid position above then true
//     {
//         return true;
//     }

//     if (str[i] != str[str.length() - i - 1])
//     {
//         return false;
//     }
//     else
//     { // recursive call
//         return checkPalindrome(str, i + 1);
//     }
// }

// int main()
// {
//     string name = "abcddcba";

//     bool isPalindrome = checkPalindrome(name, 0);

//     if (isPalindrome)
//     {
//         cout << "Its a Palindrome " << endl;
//     }
//     else
//     {
//         cout << "It is not Palindrome " << endl;
//     }

//     return 0;
// }

bool Palindrome(string str, int i){
    //base case 
    if (i>str.length()-i-1)
    {
        return true;
    }

    if (str[i]!=str[str.length()-i-1])
    {
        return false;
    }
    else{
        //Recursive call
        return Palindrome(str, i+1);
    }
    
}


int main(){


  string str="ab1331ba";

 bool ans=Palindrome(str,0);
 if (ans)
 {
    cout<<"palindrome "<<endl;
 }
 else{
    cout<<"Not a Palindrome "<<endl;
 }


    return 0;
}