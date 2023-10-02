#include <iostream>
using namespace std;

//****************Dynamic Memory Allocation of 2D Array*********************

int main()
{
    //*****************Normal method*************
    // int n, m;
    // cout << "Enter the value of n " << endl;
    // cin >> n >> m;
    // int arr[n][m];
    // int**arr= new int*[n];

    //*************Dynamic method to create 2D array for nxn;
    // int n;
    // cout << "Enter the value of n " << endl;
    // cin >> n;
    // int **arr = new int *[n];

    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

    // // taking the input
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    // // printing the array
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //*************Dynamic method to create 2D array for nxm;
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    int m;
    cout << "Enter the value of m " << endl;
    cin >> m;

    // creating a 2D array
    int **arr = new int *[n];   // visualization --> first create n number of int* rows then create col. to
    for (int i = 0; i < n; i++) // each respective row eg. int* ->v2 v3 v4 v5.....
    {                           //                           same as follow
        arr[i] = new int[m];
    }

    // taking the input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // printing the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //releasing the memory 
    for (int i = 0; i <n; i++)
    {
    delete []arr[i];
    }
    delete []arr;

    

    return 0;
}