#include <iostream>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

//*******Array based questions **********

// 1) Rotate an Array in cyclic way
// according to condition eg. 2 values ie. {1,2,3,4}->{3,4,1,2}

//*****using vector***

// void Rotate(vector<int> &num, int k)
// {
//     vector<int> temp(num.size());

//     for (int i = 0; i < num.size(); i++)
//     {
//         temp[(i + k) % num.size()] = num[i]; // use % becz we now % range is between 0 to n-1 max for dividing anynum
//     }                                        // here eg. for i=0 lets as k=3 means 0+3%7=3 -> we have found exact position 3 ie num[3]=num[0];
//     // copy temp into num vector
//     num = temp;
// }
// void print(vector<int> num)
// {
//     for (int i = 0; i < num.size(); i++)
//     {
//         cout << num[i] << " ";
//     }
// }

// int main()
// {

//     vector<int> num;

//     num.push_back(1);
//     num.push_back(2);
//     num.push_back(3);
//     num.push_back(4);
//     num.push_back(5);
//     num.push_back(6);
//     num.push_back(7);
//     cout << "Given array is " << endl;
//     for (auto i : num)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     int k;
//     cout << "Enter the value of k " << endl;
//     cin >> k;

//     cout << "Rotating array is " << endl;
//     Rotate(num, k);
//     print(num);

//     return 0;
// }

// 2)******check given array s sorted and rotated if yes then print 1 else 0**********
//  approach->rotate arry  {3,4,5,1,2}->here only one pair [i-1]>[i]
//  similaelt if array is only sorted ->{1,2,3,4,5}-> only one pair is [i-1]>[i]
// so our approac is to only one pair is [i-1]>[i]; then true
//  {3,5,7,1,6}-> here two pair is exist and the arry is non sorted so to exclude this we ignore more than two pairs

// bool check(vector<int> &nums)
// {
//     int count = 0;
//     int n = nums.size();
//     for (int i = 1; i < n; i++)
//     {
//         if (nums[i - 1] > nums[i])
//         {
//             count++;
//         }
//     }
//     if (nums[n - 1] > nums[0])
//     {
//         count++;
//     }
//     return count <= 1; // here <= means there is some time no any pair taht time
//     // eg. {1,1,1}-> here [i-1]==[i] so due to this meaning is pair count is
//     // 0 or 1 forward true .
// }

// int main()
// {

//     vector<int> nums;

//     nums.push_back(1);
//     nums.push_back(1);
//     nums.push_back(1);
//     // nums.push_back(1);
//     // nums.push_back(2);

//     cout << "Given array is " << endl;
//     for (auto i : nums)
//     {
//         cout << i << " ";
//     }
//     cout << endl;

//     cout << check(nums) << endl;

//     return 0;
// }

// 3)*************Sum of to arrays ***********

// vector<int> reverse(vector<int> v)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     while (s < e)
//     {
//         swap(v[s++], v[e--]);
//     }
//     return v;
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m)
// {
//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;
//      int carry = 0;

//     while (i >= 0 && j >= 0)
//     {
//         int val1 = a[i];
//         int val2 = b[j];

//         int Sum = val1 + val2 + carry;

//         carry = Sum / 10;
//         Sum = Sum % 10;
//         ans.push_back(Sum);
//         i--;
//         j--;
//     }
//     // first case

//     while (i >= 0)
//     {
//         int Sum = a[i] + carry;
//         carry = Sum / 10;
//         Sum = Sum % 10;
//         ans.push_back(Sum);
//         i--;
//     }
//     // Seond case
//     while (j >= 0)
//     {
//         int Sum = b[j] + carry;
//         carry = Sum / 10;
//         Sum = Sum % 10;
//         ans.push_back(Sum);
//         j--;
//     }

//     // Third case
//     while (carry != 0)
//     {
//         int Sum = carry;
//         carry = Sum / 10;
//         Sum = Sum % 10;
//         ans.push_back(Sum);
//     }

//     // print(ans);
//      return reverse(ans);
// }

// int main()
// {   
//     vector<int> Sum;

//     Sum.push_back(1);
//     Sum.push_back(2);
//     Sum.push_back(3);
//     Sum.push_back(4);

//     for (auto i : Sum)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     vector<int>findArraySum(Sum);

//     return 0;
// }