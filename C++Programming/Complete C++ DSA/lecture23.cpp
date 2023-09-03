#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//******************2D Array**************************
// int arr[3][3];
// input->cin>>arr[i][j];  -> firt [] for rows and second one for colums
// output->cout<<arr[i][j]<<endl;

// int main()
// {
// create 2d array
// int arr[3][4];

// taking input->row wise
/*  cout << "Enter the input " << endl;
  for (int i = 0; i < 3; i++)
  {
      for (int j = 0; j < 4; j++)
      {
          cin >> arr[i][j];
      }
  }
  */

// taking input->colum wise
/* cout << "Enter the input " << endl;
 for (int i = 0; i < 4; i++)
 {
     for (int j = 0; j < 3; j++)
     {
         cin >> arr[j][i];
     }
 } */
// Print
/* cout << "output is " << endl;
 for (int i = 0; i < 3; i++)
 {
     for (int j = 0; j < 4; j++)
     {
         cout << arr[i][j] << " ";
     }
     cout << endl;
 }  */

//************initialize and then get ouput***********

// int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

// // Print
// cout << "output is " << endl;
// for (int i = 0; i < 3; i++)
// {
//     for (int j = 0; j < 4; j++)
//     {
//         cout << arr[i][j] << " ";
//     }
//     cout << endl;
// }

//************input arrording to row****************

//  int arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

//   // Print
//     cout << "output is " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// return 0;
// }

//*****************Vector in 2D Array******************
// Syntax-> vector<vector<datatype>>vector_name

//***how to take an input using vector*****

// int main()
// {

//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> arr(3, vector<int>(3));
//     arr = {{1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}};
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     return 0;
// }

//************how to initialize ********

// int main()
// {
//     vector<vector<int>> arr(3, vector<int>(3));
//     arr = {{1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}};

//     return 0;
// }

//**********vector with all value zero******
//    vector<vector<int>> arr(3, vector<int>(3,0));

//*************Find the number in  2D array**********

// bool isPresent(int arr[][4], int target, int i, int j)
// {

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 return 1;
//             }
//         }
//         return 0;
//     }
// }
// int main()
// {

//     int arr[3][4] = {{1, 11, 111, 1111}, {2, 22, 222, 2222}, {3, 33, 333, 3333}};

//     // Print
//     cout << "output is " << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "Enter the target you want to search " << endl;
//     int target;
//     cin >> target;

//     if (isPresent(arr, target, 3, 4))
//     {
//         cout << "Element is found " << endl;
//     }
//     else
//     {
//         cout << "Not found " << endl;
//     }

//     return 0;
// }

//**********Sum of row and col****************

// Row by sum

// void rowSum(int arr[][3], int row, int col)
// {
//     cout << "sum of 3 rows are " << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         int sum = 0;
//         for (int col = 0; col < 3; col++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << endl;
//     }
//     cout << endl;
// }
//   // col sum
// void colSum(int arr[][3], int row, int col)
// {
//     cout << "Sum of 3 col " << endl;
//     for (int col = 0; col < 3; col++)
//     {
//         int sum = 0;
//         for (int row = 0; row < 3; row++)
//         {
//             sum += arr[row][col];
//         }
//         cout << sum << endl;
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr[3][3];

//     cout << "input to an array " << endl;
//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cin >> arr[row][col];
//         }
//     }

//     cout << "Printing the array " << endl;

//     for (int row = 0; row < 3; row++)
//     {
//         for (int col = 0; col < 3; col++)
//         {
//             cout << arr[row][col] << " ";
//         }
//         cout << endl;
//     }
//     cout << "Row sum is " << endl;
//     rowSum(arr, 3, 3);

//     cout << "Col sum is " << endl;
//     colSum(arr, 3, 3);
//     return 0;
// }

//***********Print like a wave**********
// incomplete
// vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
// {
//     vector<int> ans;

//     for (int col = 0; col < mCols; col++)
//     {
//         if (col & 1)
//         {
//             // odd index >Bottom to top
//             for (int row = nRows - 1; row >= 0; row--)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         else
//         {
//             // 0 or even index -> top to bottom
//             for (int row = 0; row < nRows; row++)
//             {
//                 ans.push_back(arr[row][col]);
//             }
//         }
//         return ans;
//     }
// }

// int main()
// {
//     // n,m;
//     //   cin>>n>>m;
//     vector<vector<int>> arr(3, vector<int>(3));
//     arr = {{1, 2, 3},
//            {4, 5, 6},
//            {7, 8, 9}};
//     //   for (int i = 0; i <n; i++)
//     //   {
//     //     for (int j = 0; j <m; j++)
//     //     {
//     //         cin>>arr[i][j];
//     //     }

//     //   }

//     // wavePrint(arr);

//     return 0;
// }

//********** array wave example by using simple method*********
// int main() {
//     vector<vector<int>> arr
//     {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };

//     cout<<endl<<"Given 2D Array"<<endl;
//     for(int row=0; row<arr.size(); row++){
//         for(int col=0; col<arr.size(); col++){
//             cout<<arr[row][col]<<" ";
//         } cout<<endl;
//     }

//     cout<<endl<<"wave print"<<endl;

//     for(int col=0; col<arr.size(); col++){
//         if(col & 1){
//             for(int row=arr.size()-1; row>=0; row--){
//                 cout<<arr[row][col]<<" ";
//             }
//         } else {
//             for(int row=0; row<arr.size(); row++){
//                 cout<<arr[row][col]<<" ";
//             }
//         }
//     }

//    return 0;
// }

// 6)*****************Spiral matix**************

//  vector<int> spiralOrder(vector<vector<int>>& matrix)
// {

//     //vector<int> ans;
//     int row = matrix.size();
//     int col = matrix[0].size();

//     int count = 0;
//     int total = row * col;

//     // index initialisation
//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row - 1;
//     int endingCol = col - 1;

//     while (count < total)
//     {
//         // printing starting row;
//         for (int index = startingCol; count < total && index <= endingCol; index++)
//         {
//             cout<<(matrix[startingRow][index])<<" ";
//             count++;
//         }
//         startingRow++;

//         // print ending colum

//         for (int index = startingRow; count < total && index <= endingRow; index++)
//         {
//             cout<<(matrix[index][endingCol])<<" ";
//             count++;
//         }
//         endingCol--;

//         // printing ending row
//         for (int index = endingCol; count < total && index >= startingCol; index--)
//         {
//             cout<<(matrix[endingRow][index])<<" ";
//             count++;
//         }
//         endingRow--;

//         // print starting column
//         for (int index = endingRow; count < total && index >= startingRow; index--)
//         {
//             cout<<(matrix[index][startingCol])<<" ";
//             count++;
//         }
//         startingCol++;
//     }

// }

// int main()
// {
//     int n, m;
//     cout<<"Enter the size of an array "<<endl;
//     cin>>n>>m;
//        cout<<"Enter the array elements "<<endl;
//      vector<vector<int>> matrix(n, vector<int>(m));

//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     //printing of an array

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<< matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     spiralOrder(matrix);

//     return 0;
// }

//**************Search 2D matrix************

// bool searchMatrix(vector<vector<int>> &matrix, int target)
// {

//     int row = matrix.size();
//     int col = matrix[0].size();

//     int rowIndex = 0;
//     int colIndex = col - 1;

//     while (rowIndex < row && colIndex >= 0)
//     {
//         int element = matrix[rowIndex][colIndex];
//         if (element == target)
//         {
//             return 1;
//         }
//         if (element < target)
//         {
//             rowIndex++;
//         }
//         else
//         {
//             colIndex--;
//         }
//     }
//     return 0;
// }

// int main()
// {

//     int n, m;
//     cout << "Enter the size of an array " << endl;
//     cin >> n >> m;
//     cout << "Enter the array elements " << endl;
//     vector<vector<int>> matrix(n, vector<int>(m));

//     vector<int> ans;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }

//     // printing of an array

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     if (searchMatrix(matrix, 3))
//     {
//         cout << "Is present " << endl;
//     }
//     else
//     {
//         cout << "Is not present " << endl;
//     }

//     return 0;
// }

//**********Sieve of eratosthenes aproach to fund prime number**********
// incomplete
// int countPrime(int n)
// {
//     int cnt = 0;
//     vector<bool> prime(n + 1, true);

//     prime[0] = prime[1] = false;

//     for (int i = 2; i < n; i++)
//     {
//         if (prime[i])
//         {
//             cnt++;
//             for (int j = 2 * i; j < n; j = j + i)
//             {
//                 prime[j] = 0;
//             }
//         }
//     }
//     return cnt;
// }

// int main()
// {

//     int n;
//     cin >> n;
  
   

//     return 0;
// }