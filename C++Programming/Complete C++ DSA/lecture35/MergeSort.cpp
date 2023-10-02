#include <iostream>
using namespace std;

//*******************Merge Sort***************
// working principle 
/*     0    1   2   3  4  5   6
       38   27  43  3 | 9  82  10
    // find mid and seperate two array

       38  27 | 43  3        9   82|  10

    //again mid and sort

      38 | 27     43 | 3        9 | 82     10

      //again mid and sort until all seperate

      38   27    43    3        9    82     10

     now comparing last sorted pairs and adjust according to value

     27 38       3 43           9 82     10

     //now compare 2 successive array

     3 27 38 43   9 10 82

     //finally we will get sorted array

    3 9 10 27 38 43 82

    //This process is called merge sort andbelow we have did this using recursion  
*/

void merge(int *arr, int s, int e)
{ //*arr-> arr[]
    int mid = {s + (e - s) / 2};

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // coping the values into first new array
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
    // coping the values into second new array second

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }
    // merging first and second

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}

void mergeSort(int arr[], int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }
    int mid = {s + (e - s) / 2};
    // sorting the left part
    mergeSort(arr, s, mid);
    // sortig the right part
    mergeSort(arr, mid + 1, e);

    // merging the two
    merge(arr, s, e);
}

int main()
{

    int arr[5] = {2, 5, 1, 6, 9};
    int n = 5;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}