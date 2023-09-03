#include <iostream>
#include <climits>
using namespace std;

//*************Subarrays************
// A subarray is a contiguous part of an array
//{-1, 4,7,2}-> {-1,4,7} are the subarray of array{-1, 4,7,2}
// {-1,4,2 } is not subarray of {-1,4,7,2} becz. not a contiguous

// to find a possible array if an given array;
// int main()
// {

//     int n;
//     cout << "Enter the array size " << endl;
//     cin>>n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }cout<<endl;

//         }
//     }

//     return 0;
// }

//************** eg. Maximum Subarray sum programming**********
// Brute force approach
// here the time complixty is very in this case worse ie -> O(n)0 to better this we have
// Cumulative sum approach

// int main()
// {

//     int n;
//     cout << "Enter the array size " << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }

//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

//************Cumulative sum approach for finding maximum subarray**********
// eg. Array              -1  4  7  2
// cumulative sum array   -1  3  10 12  // becz we add no successively -1+4=3, 3+7=10 ,10+2=12
// here we substract starting point into  ending point here ie. 3,10,12 minus -1 so thats
// we need only two loops.ie cummulative sum of ending points- cumulative sum of statrting point

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int currsum[n + 1];
//     currsum[0] = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         currsum[i] = currsum[i - 1] + arr[i - 1];
//     }

//     int maxSum = INT_MIN;
//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currsum[i] - currsum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum;

//     return 0;
// }

//**************Kadane's algorithms approach for maximum subarray***********
// kadance algorithm gives we an answer in single loop
// here we used only one time loop
// here we make an verible of currrent sum which stores the sum of no and update regurely.
// we need max. positive integers which present continously.and make zero whenever it becomes
// negatives.
// eg  Array    -1  4  -6  7  -4
// current sum  -1  4  -2  7   3
//               0  4  -6  7  -4  working as like -1 as it is -1 after due to -ve become zero
// now updated value is only 4 now 4-6 is -2 so again it is -ve so updated value 7 finally
// finally max sum is 7

// int main()
// {

//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int currentSum = 0;
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currentSum += arr[i];
//         if (currentSum < 0)
//         {
//             currentSum = 0;
//         }
//         maxSum = max(maxSum, currentSum);
//     }

//     cout << maxSum << endl;

//     return 0;
// }

//**********Maximum circular subarray sum to finding max **********
//

// int kadane(int arr[], int n)
// {
//     int currentsum = 0;
//     int maxsum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         currentsum += arr[i];
//         if (currentsum < 0)
//         {
//             currentsum = 0;
//         }
//         maxsum = max(maxsum, currentsum);
//     }
//     return maxsum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int wrapsum;
//     int nonwrapsum;

//     nonwrapsum = kadane(arr, n);
//     int totalsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         totalsum += arr[i];
//         arr[i] = -arr[i];
//     }

//     wrapsum = totalsum + kadane(arr, n);
//     cout << max(wrapsum, nonwrapsum) << endl;

//     return 0;
// }


//*******IMP note********
// plese see the lecture 8.6 last example also 8.4 and 8.5 all videos, 