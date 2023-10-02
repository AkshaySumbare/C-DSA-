#include <iostream>
using namespace std;

//****************Problems based on the recursion****************
// 1) reverse the string using the recursion

//*********normal way**********
// void reverseString(string& str)
// {

//     int n = str.length();

//     for (int i = 0; i < n / 2; i++)
//     {
//         swap(str[i], str[n - i - 1]);
//     }
// }

// int main()
// {

//     string str = "AKSHAY ";
//     reverseString(str);
//     cout<<str<<endl;

//     return 0;
// }

//************recursive way***********

void reverse(string &str, int i, int j)
{

    // base case
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    // Recursive call
    reverse(str, i, j);
}

int main()
{

    string name = "Akshay";

    reverse(name, 0, name.length() - 1);

    cout << name << endl;

    return 0;
}
