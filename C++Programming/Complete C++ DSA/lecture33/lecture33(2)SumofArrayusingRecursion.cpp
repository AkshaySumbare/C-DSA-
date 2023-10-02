#include <iostream>
using namespace std;
//*******************Sum iof an array using Recursive method************

void print(int arr[], int size)
{

    cout << "Size of arry is " << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int FindSum(int arr[], int size)
{
    print(arr, size);
    // base case
    if (size <= 0)
    {
        return 0;
    }
    // recursive code
    // return (FindSum(arr, n - 1) + arr[n - 1]);

    int remainingPart = FindSum(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};

    cout << FindSum(arr, 5) << endl;

    return 0;
}
