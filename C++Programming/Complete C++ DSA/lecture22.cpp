#include <iostream>
#include <bits/stdc++.h>
#include<string>
#include<vector>
using namespace std;

//********************** character array in C++************************:

//  in case of array we need to pass both array name and its size but i case of cha rie. string only there is need
//  pass the name in character array

// 1)************* to define the string and to count the length of string************
//  int getlength(char name[]){

//     int count =0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main(){

//    char name[20];

//    cout<<"Enter your name "<<endl;
//    cin>>name; // cin stop the execution when we give space ,Tab, newline ,enter
//   // name[2]='\0';// whenever there is null character stop the execution

//    cout<<"Your name is ";
//    cout<<name<<endl;

//     cout<<"Length = "<<getlength(name)<<endl;

//     return 0;
// }

// 2) *****************Checking the Palindrome****************

// bool CheckPalindrome(char name[], int n)
// {

//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (name[s] != name[e])
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }

//     return 1;
// }

// int getlength(char name[])
// {

//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {

//     char name[20];

//     cout << "Enter your string " << endl;
//     cin >> name;

//     int len = getlength(name);
//     cout << "Length = " << len << endl;

//     if (CheckPalindrome(name, len) == 1)
//     {
//         cout << "The string is Palindrome " << endl;
//     }
//     else
//     {
//         cout << "The string is not Palindrome" << endl;
//     }
//     return 0;
// }

// 3)*********************** reverse the string***********************

// void reverse(char name[], int n)
// {

//     int s = 0;
//     int e = n - 1;
//     while (s < e)
//     {
//         swap(name[s++], name[e--]);
//     }
// }

// int getlength(char name[])
// {

//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {

//     char name[20];

//     cout << "Enter your name " << endl;
//     cin >> name; // cin stop the execution when we give space ,Tab, newline ,enter
//                  // name[2]='\0';// whenever there is null character stop the execution

//     cout << "Your name is ";
//     cout << name << endl;

//     int len = getlength(name);
//     cout << "Length = " << len << endl;

//     cout << "Your reverse string is ";
//     reverse(name,len);

//     cout << "Your name is " << endl;
//     cout << name << endl;

//     return 0;
// }

// 4)*********Checking the palindrome irrespective to Lower case or Upper case *****************

// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a'; // good logic Ascai value substract
//         return temp;
//     }
// }

// bool CheckPalindrome(char name[], int n)
// {

//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (toLowerCase(name[s]) != toLowerCase(name[e]))
//         {
//             return 0;
//         }
//         else
//         {
//             s++;
//             e--;
//         }
//     }

//     return 1;
// }

// int getlength(char name[])
// {

//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {

//     char name[20];

//     cout << "Enter your string " << endl;
//     cin >> name;

//     int len = getlength(name);
//     cout << "Length = " << len << endl;

//     if (CheckPalindrome(name, len) == 1)
//     {
//         cout << "The string is Palindrome " << endl;
//     }
//     else
//     {
//         cout << "The string is not Palindrome" << endl;
//     }
//     return 0;
// }

// 5)*************Check palindrome irrespective to lowercase .*********************
//  also check for digit and exclude special character****
//
//  char Special(int num){
//      if ()
//      {
//          return num;
//      }
//      else{
//          return 0;
//      }

// }

// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'A' + 'a'; // good logic Ascai value substract
//         return temp;
//     }
// }

// bool CheckPalindrome(char name[], int n)
// {

//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         if (toLowerCase(name[s]) != toLowerCase(name[e]))
//         {
//             return 0;
//         }
//          else if (todigit(name[s]) !=todigit(name[e]))
//         {
//              return 0;
//         }

//         else{

//             s++;
//             e--;
//         }
//     }

//     return 1;
// }

// int getlength(char name[])
// {

//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// int main()
// {

//     char name[20];

//     cout << "Enter your string " << endl;
//     cin >> name;

//     int len = getlength(name);
//     cout << "Length = " << len << endl;

//     if (CheckPalindrome(name, len) == 1)
//     {
//         cout << "The string is Palindrome " << endl;
//     }
//     else
//     {
//         cout << "The string is not Palindrome" << endl;
//     }
//     return 0;
// }

// 6)************Valid Palindrome*******************
//  after converting the all uppercase into lowercase and removing all non-alphanumeric character

// bool isAlphaNum(char c)
// {
//     if ((48 <= c && c <= 57) || (65 <= c && c <= 90) || (97 <= c && c <= 122))
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// char lowerCase(char c)
// {
//     if (65 <= c && c <= 90)
//     {
//         return c + 32;
//     }
//     else
//     {
//         return c;
//     }
// }

// bool isPalindrome(string s)
// {
//     string input;
//     for (char c : s)
//     {
//         if (isAlphaNum(c))
//         {
//             input += lowerCase(c);
//         }
//     }
//     string reversed = input;
//     reverse(reversed.begin(), reversed.end());
//     if (input == reversed)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     string s = "A man, a plan, a canal: Panama";
//     if (isPalindrome(s))
//     {
//         cout << "true" << endl;
//     }
//     else
//     {
//         cout << "false" << endl;
//     }
//     return 0;
// }

// 7)*************Reverse word in the String*************
//  eg. My name is Akshay -> yM eman si yahska

// void reverse_str(string& str){
//    int n = str.length();
//    for (int i = 0; i < n / 2; i++)
//       swap(str[i], str[n - i - 1]);
// }
// int main(){
//    string str = "tutorialspoint";
//    reverse_str(str);
//    cout << str;
//    return 0;
// }

// 8)************Return maximum occuring character in an input string************
//  eg. test-> t=2, e=1,s=1 so the answer is 2 ie.'t'

// char getMaxOccCharacter(string s)
// {

//     int arr[26] = {0};

//     // creating an array of count of character
//     for (int i = 0; i < s.length(); i++)
//     {
//         char ch = s[i];
//         // lowercase
//         int number = 0;
//         if (ch >= 'a' && ch <= 'z')
//         {
//             number = ch - 'a';
//         }
//         else
//         {
//             // uppercase
//             number = ch - 'a';
//         }
//         arr[number]++;
//     }
//     int maxi = -1, ans = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     char finalAns = 'a' + ans;
//     return finalAns;
// }

// int main()
// {

//     string s;
//     cout<<"Enter the string "<<endl;
//     cin >> s;

//     cout << getMaxOccCharacter(s) << endl;

//     return 0;
// }

//******Notes****
// as we know cin stop execution after tab,enter, space, to avoide thus we used " cin.getline(str, len) "

// 9)**********Replace Spaces*******
// replace spaces by adding @40

// string replaceSpaces(string str)
// {
//     string temp;
//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//         {
//             temp.push_back(str[i]);
//         }
//     }
//     return temp;
// }

// int main()
// {
//      string s="My name is Akshay ";
//     cout << replaceSpaces(s) << endl;

//     return 0;
// }

// 10)******************Remove ALl occurances of a string***********************
//  eg.s="daabcbaabcbc", part to remove "abc" and update then again see is there any part again

// string removeOccurance(string s, string part)
// {
//     while (s.length() != 0 && s.find(part) < s.length())
//     {
//         s.erase(s.find(part), part.length()); // s.length() here shows
//     }                                         // shows delete pattern until it present again again after
//     return s;
// }

// int main()
// {
//     //    string s="daabcbaabcbc";
//     //    string part="abc";

//     string s = "axxxxyyyyb";
//     string part = "xy";
//     cout << removeOccurance(s, part) << endl;

//     return 0;
// }

//

// 11)****************Permutation in string****************
// ie. s1="ab" , s2="eidbaooo" here s1 permuation is ab, ba so it is present in this
// bool checkEqual(int a[26], int b[26])
// {
//     for (int i = 0; i < 26; i++)
//     {
//         if (a[i] != b[i])
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// bool checkInclusion(string s1, string s2)
// {
//     // character count array
//     int count1[26] = {0};
//     for (int i = 0; i < s1.length(); i++)
//     {
//         int index = s1[i] - 'a';
//         count1[index]++;
//     }
//     // traverse s2 string in window of size s1 length and compare

//     int i = 0;
//     int windowSize = s1.length();
//     int count2[26] = {0};
//     // running for first window
//     while (i < windowSize && i < s2.length())
//     {
//         int index = s2[i] - 'a';
//         count2[index]++;
//         i++;
//     }
//     if (checkEqual(count1, count2))
//     {

//         return 1;
//     }
//     // aage window process karo
//     while (i < s2.length())
//     {
//         char newChar = s2[i];
//         int index = newChar - 'a';
//         count2[index]++;
//         char oldChar = s2[i - windowSize];
//         index = oldChar - 'a';
//         count2[index]--;

//         i++;

//         if (checkEqual(count1, count2))
//         {

//             return 1;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     string s1 = "ab";
//     string s2 = "eidbaooo";

//     cout << checkInclusion(s1, s2) << endl;

//     return 0;
// }

// 12)**********************Remove adjacent duplicate*********************
//  eg. abbaca-> here bb is adjacent dublicate so remove this and our final string is aaca
//  again aa is dublicate so remove this our answer is ca.

// 13)******************String compresion***********
// eg. input-{a,a,b,b,b,c,c,c}-> output-{a,2,b,3,c,3}
//  exception when the character is only one size then show only that character
//incomplete due to main function


// int compress(vector<char> chars)
// {
//     int i = 0;
//     int ansIndex = 0;
//     int n = chars.size();

//     while (i < n)
//     {
//         int j = i + 1;
//         while (j < n && chars[i] == chars[j])
//         {
//             j++;
//         }
//         // yaha kab aaoge
//         // ya toh vector poora traverse krdia
//         // ya fer new/Different character encounter kia hai

//         // oldChar store karlo
//         chars[ansIndex++] = chars[i];

//         int count = j - i;

//         if (count > 1)
//         { // converting counting into single digit and saving in answer

//             string cnt = to_string(count);
//             for (char ch : cnt)
//             {
//                 chars[ansIndex++] = ch;
//             }
//         }
//         // moving to new/different character
//         i = j;
//     }
//     return ansIndex;

 
// }

// int main(){
  




//     return 0;
// }

