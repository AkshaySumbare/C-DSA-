#include<iostream>
using namespace std;


// ****************Recursion for Selection Sort************

void SelectionSort(int arr[], int n)
{

    // base case
    if (n == 0 || n == 1)
    {
        return;
    }

    // compare first element with other all elements and swap  similarly ...

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i]) // compare 1 element to all other remaining array elements
            {
                swap(arr[j], arr[i]); // just one condition solve
            }
        }
    }

    // Recursion logic
    SelectionSort(arr, n - 1); // other condition will automatically using recursion
}

int main()
{

    int arr[5] = {7, 6, 1, 2, 9};

    SelectionSort(arr, 5);

    cout << endl;
    cout << "Sorted arry is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
