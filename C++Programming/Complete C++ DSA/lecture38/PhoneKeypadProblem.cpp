#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//************phone key problem using Recursion***************



void Solve(string digits, vector<string> &ans, string output, string mapping[], int index)
{ // base case
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int number = digits[index] - '0'; // for to get integer equivalent
    cout << number << endl;
    string str = mapping[number];
    cout << str << endl;

    for (int i = 0; i < str.length(); i++)
    {
        output.push_back(str[i]);
        Solve(digits, ans, output, mapping, index + 1);
        output.pop_back(); // to remove the a
    }
}

vector<string> letterCombination(string digits)
{
    vector<string> ans;

    if (digits.length() == 0)
    {
        return ans;
    }

    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    Solve(digits, ans, output, mapping, index);

    return ans;
}

int main()
{
    string digits;

    cout << "Enter the digits : ";
    getline(cin, digits);

    vector<string> ans = letterCombination(digits);

    cout << "All possible combinations of string is as follow " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "{ " << ans[i] << " }"
             << " ";
    }

    return 0;
}