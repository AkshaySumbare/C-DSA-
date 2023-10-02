#include <iostream>
using namespace std;

//********Sorted array example by using recurson************
// recursion method for Bubble sort example

void BubbleSort(int arr[], int n)
{

    // base case -already sorted
    if (n == 0 || n == 1)
    {
        return;
    }

    // 1) largest element put at the end

    for (int i = 0; i < n - 1; i++) // n-1 becz if we write n then i+1 exceed value in below
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call
    BubbleSort(arr, n - 1); // becz now n redicre to n-1 as due to first operation
}

int main()
{

    int arr[5] = {2, 5, 1, 6, 9};

    BubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}