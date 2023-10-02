#include <iostream>
using namespace std;

//*******************QuickSort***********
// we can picked a element and put in its permanant right place such that eg. element is e then  left side <e <-e -> >e right side
// eg. 1 5 3 8 2 4
/*
   here take any element and place its right position
   1 5 3 8 2 4

   1 2 3 8 4

   in this way we have solved one case other case will handle the recursion
   again using quicksort for 1 2   and 8  4 same thing do

*/

int partition(int arr[], int s, int e)
{
    int pivot = arr[e];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // right place of pivot
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // now we go toward left and right part of pivot
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    // partitions

    int p = partition(arr, s, e);
   //Recursive call
    // left part sort
    quickSort(arr, s, p - 1);

    // Right part sort
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;
    
     quickSort(arr, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout<<endl;

    return 0;
}