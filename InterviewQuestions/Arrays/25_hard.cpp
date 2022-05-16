//Print all possible combinations of r elements in a given array of size n

//Given an array of size n, generate and print all possible combinations
// of r elements in array. For example, if input 
// array is {1, 2, 3, 4} and r is 2, then output should be 
// {1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4} and {3, 4}.

#include <bits/stdc++.h>
using namespace std;

void possibleCombinations(vector<int>& nums, int i_nums, int r, vector<int>& ans, int i_ans){
    if(i_ans==r){
        for(int i=0;i<r;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(i_nums>=nums.size())
        return;
    ans[i_ans]=nums[i_nums];
    possibleCombinations(nums,i_nums+1,r,ans,i_ans+1);
    possibleCombinations(nums,i_nums+1,r,ans,i_ans);
}

int main()
{
    vector<int> nums{1,2,3,4};
    int r=3;
    vector<int> ans(r,0);
    possibleCombinations(nums,0,r,ans,0);
    return 0;
}