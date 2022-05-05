//Given an integer array nums, return true if any value appears at least twice in
// the array, and return false if every element is distinct.

#include <bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums,int n) {
    sort(nums.begin(), nums.end());
    for(int i=1;i<n;i++){
        if(nums[i-1]==nums[i]){
            return true;
        }
    }
    return false;
} 

int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cout<<containsDuplicate(nums,n);
    return 0;
}