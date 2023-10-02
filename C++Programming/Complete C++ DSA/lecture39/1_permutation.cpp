#include<iostream>
#include<vector>
using namespace std;

//1)Permutations leetcode problems


void solve(vector<int>nums, vector<vector<int>>& ans, int index){
    //base
    if (index>=nums.size()){
        ans.push_back(nums);
        return;
    }
     for (int j =index; j <nums.size(); j++)
     {
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        //backtrack
        swap(nums[index], nums[j]);
     }
     
}
  
  vector<vector<int>>permute(vector<int>&nums){
     vector<vector<int>>ans;
     int index=0;
     solve(nums, ans, index);
     return ans;
  }

int main(){
      int size;
    cout << "Enter the size : ";
    cin >> size;

    vector<int> arr(size);
    cout << "Enter the elements : ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }
    
    vector< vector<int> > solution = permute(arr);
    
    cout << "All permutations : " << endl;
    for(int i=0; i<solution.size(); i++) {
        cout << "[ ";
        for(int j=0; j<solution[i].size(); j++) {
            cout << solution[i][j] << " ";
        }
        cout << "]" << endl;
    }







    return 0;
}