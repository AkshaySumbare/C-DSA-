#include <iostream>
using namespace std;
//*******Data types variable*********
// int a =5 -> here "int" is Datatype while "a" is variable
int main()
{

    // int n;
    // cin >> n;
    // // int sum=0;
    // int i = 2;
    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << "Not prime " << endl;
    //     }
    //     else
    //     {
    //         cout << "Prime " << endl;
    //     }
    //     i++;
    // }

    //*********Patterns questions*********
    //  int n;
    //  cin>>n;
    //  int sum=0;
    //  int i=2;
    //  while (i<=n)
    //  {   sum=sum+i;
    //     i=i+2;
    //  }
    //  cout<<"The sum of even positive number is "<<sum<<endl;

    //*********Patterns questions*********
    // while solving the pattern question always show relation of colum w.r.t. row

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << "* ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << i<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout << i<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout<<j<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout<<n-j+1<<" ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 1;
    // int count=1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout <<count << " ";
    //         count++;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         cout <<"* ";

    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // // }

    // int n;
    // cin >> n;
    // int count=1;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         cout <<count<<" ";
    //        count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1,val=row+1-col;
    //     while (col <=row)
    //     {
    //         cout <<val<<" ";
    //         val++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1,val=row+1;
    //     while (col <=row)
    //     {
    //         cout <<val<<" ";
    //         val++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << (row - col + 1) << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         if (row == 1)
    //         {
    //             cout << "A ";
    //         }
    //         else if (row == 2)
    //         {
    //             cout << "B ";
    //         }
    //         else
    //         {
    //             cout << "C ";
    //         }

    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch<<" ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch<<" ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // char start = 'A';
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << start << " ";
    //         start++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row + col - 2; // this formuka came by here i+j-1 is logic where if we map 1=A then
    //         cout << ch << " ";             // i+j-1=1 then put both side 'A' then we get 'A'= 'A'+i+j-2
    //         col++;
    //     }
    //     cout << endl;
    //     row++;

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <=n- row)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         char start = 'A'+row+col-2;
    //         cout <<start<< " ";
    //         start++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char start = 'A'+n-row;  // special case here only increase after initial column thats why
    //     while (col <=row)
    //     {

    //         cout <<start<< " ";
    //         start++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char start = 'A' + row - 1; // special case here only increase after initial column thats why
    //     while (col <= n)
    //     {

    //         cout << start << " ";
    //         start++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // { // space print karlo
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space = space - 1;
    //     }
    //     // stars print karlo
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    //     cin >> n;
    //     int row = 1;
    //     while (row <= n)
    //     {
    //         int col = 1;
    //         while (col <= n-row+1)
    //         {

    //             cout<< "* ";
    //             col++;
    //         }
    //         cout << endl;
    //         row++;
    //     }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // { // space print karlo
    //     int space =n-row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     // stars print karlo
    //     int col = 1;
    //     while (col <=row)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n - row + 1)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {   int space=row-1;
    //   while (space)
    //   {
    //     cout<<"  ";
    //     space++;
    //   }

    //     int col = 1;
    //     while (col <=n-row+1)

    //     {
    //         cout << "* ";
    //         col--;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // {
    //     int space = n - row + 1;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row << " ";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int count = 1;
    // int row = 1;
    // while (row <= n)
    // {
    //     int space = n - row + 1;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << count << " ";
    //         count++;
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // { // Printig 1st space traingle
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     // Printing 2st triangle
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << col << " ";
    //         col++;
    //     }
    //     // print 3rd triangle
    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout << start << " ";
    //         start--;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin >> n;
    // int row = 1;
    // while (row <= n)
    // { // Printig 1st space traingle
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << "  ";
    //         space--;
    //     }
    //     // Printing 2st triangle
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "* ";
    //         col++;
    //     }
    //     // print 3rd triangle
    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout << "* ";
    //         start--;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // int n;
    // cin>>n;
    // int row=1;
    // while (row<=n)
    // {   int col=1;
    //     while (col<=n-row+1)
    //     {
    //       cout<<col<<" ";
    //       col++;
    //     }
    //     int print=1;
    //     while (print<=row-1)
    //     {
    //         cout<<"* ";
    //         print++;
    //     }
    //     int start=1;
    //     while (start<=row-1)
    //     {
    //        cout<<"* ";
    //        start++;
    //     }
    //     int show=1;
    //     while (show<=n-row+1)
    //     {
    //         cout<<show<<" ";
    //         show++;
    //     }

    //     cout<<endl;
    //     row++;
    // }

    return 0;
}