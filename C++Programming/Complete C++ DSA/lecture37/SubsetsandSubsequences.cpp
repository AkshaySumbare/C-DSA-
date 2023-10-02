#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//*******************Subsets/Setsequences*************

// 1)powerset example by using recursion
// powerset means all possible subsets and it is equal to 2^n where n is no of value in an set  eg.
//  nums={1,2,3}={[],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]}
//**********leetcode solution ***********
void subset(vector<int> arr, vector<int> output, int index, vector<vector<int>> &ans)
{

    // base case
    if (index >= arr.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    subset(arr, output, index + 1, ans);

    // include
    int element = arr[index];
    output.push_back(element);
    subset(arr, output, index + 1, ans);
}

 vector<vector<int>> Set(vector<int>& arr){
    vector<vector<int>>ans;
    vector<int>output;
    int index =0;
    subset(arr, output, index, ans);
    return ans;
 }

int main()
{  

     int size;
    cout << "Enter the size of the array : ";
    cin >> size;

    vector<int> arr(size);

    cout << "Enter the elements of the array : ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    vector< vector<int> > answer = Set(arr);

    cout << "All subsets : " << endl;
    for(int i=0; i<answer.size(); i++) {
        cout << "[ ";
        for(int j=0; j<answer[i].size(); j++) {
            cout << answer[i][j] << " ";
        }
        cout << "]" << endl;
    }


    return 0;
}


