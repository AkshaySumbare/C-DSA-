#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//****************Advanced level problems based on binary search*********
// when we use binary search -> whenever we found that in give solution if we eliminate some part to arrive solution 

// bool isPossible(int pages[], int n, int m, int numPages)
// {
//     int cntStudents = 1;
//     int curSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (pages[i] > numPages)
//         {
//             return false;
//         }
//         if (curSum + pages[i] > numPages)
//         {

//             // Increment student count by '1'
//             cntStudents += 1;

//             // assign current book to next student and update curSum
//             curSum = pages[i];

//             // If count of students becomes greater than given no. of students, return False
//             if (cntStudents > m)
//             {
//                 return false;
//             }
//         }
//         else
//         {
//             // Else assign this book to current student and update curSum.
//             curSum += pages[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(int pages[], int n, int m)
// {
//     // If number student is more than number of books.
//     if (n < m)
//     {
//         return -1;
//     }

//     // Count total number of pages.
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += pages[i];
//     }

//     // Check for every possible value.
//     for (int numPages = 1; numPages <= sum; numPages++)
//     {
//         if (isPossible(pages, n, m, numPages))
//         {
//             return numPages;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n = 4;
//     int m = 2;
//     int pages[] = {10, 20, 30, 40};
//     cout << "The minimum value of the maximum number of pages in book allocation is: " << allocateBooks(pages, n, m) << endl;
// }

//***********Painting the wall problems***********

// bool isPossible(int partition[], int n, int m, int numPartition)
// {
//     int cntPainter = 1;
//     int curSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (partition[i] > numPartition)
//         {
//             return false;
//         }
//         if (curSum + partition[i] > numPartition)
//         {

//             // Increment Painter count by '1'
//             cntPainter += 1;

//             // assign current partition to next painter and update curSum
//             curSum = partition[i];

//             // If count of painters becomes greater than given no. of painters, return False
//             if (cntPainter > m)
//             {
//                 return false;
//             }
//         }
//         else
//         {
//             // Else assign this partition to current painter and update curSum.
//             curSum += partition[i];
//         }
//     }
//     return true;
// }
// int allocateBooks(int partition[], int n, int m)
// {
//     // If number painter is more than number of partition.
//     if (n < m)
//     {
//         return -1;
//     }

//     // Count total number of partition sum.
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         sum += partition[i];
//     }

//     // Check for every possible value.
//     for (int numPartition = 1; numPartition <= sum; numPartition++)
//     {
//         if (isPossible(partition, n, m, numPartition))
//         {
//             return numPartition;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int n = 4;
//     int m = 2;
//     int partition[] = {5, 5, 5, 5};
//     cout << "The minimum value of the maximum number of partition allocation is: " << allocateBooks(partition, n, m) << endl;
// }


//**************agreesive cow problem**************


// bool isPossible(vector<int> & stalls, int k, int mid){
//     int cowCount =1;
//     int lastPos =stalls[0];

//     for (int i = 0; i <stalls.size(); i++)
//     {
//         if (stalls[i]-lastPos>=mid){
//             cowCount++;
//             if (cowCount==k)
//             {
//                 return true;
//             }
            
//             lastPos= stalls[i];
//         }
     
        
//     }
//     return false;
// }

// int agressiveCows(vector<int> & stalls, int k){
//     sort(stalls.begin(), stalls.end());
//     int s=0;
//     int maxi=-1;
//     for (int i = 0; i <stalls.size(); i++)
//     {
//         maxi=max(maxi,stalls[i]);
//     }
//     int e =maxi;
//     int ans =-1;
//     int mid =s+(e-s)/2;

//     while (s<=e)
//     {
//         if (isPossible(stalls,k,mid)){
//             ans =mid +1;
//         }
//          else{
//             e=mid-1;
//          }
//           mid =s+(e-s)/2;
        
//     }
//     return ans;

// }


// main(){
  
//  int n = 4;
//     int k = 2;
//     int partition[] = {5, 5, 5, 5};
//     cout << "The majority element in a separate line is  " <<agressiveCows(stalls, n, mid) << endl;

//     return 0;
// }