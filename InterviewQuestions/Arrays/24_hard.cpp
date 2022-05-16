// Given an arr[] containing n integers and a positive integer k. The problem is to 
// find the length of the longest subarray with sum of the elements divisible by the given value k.

#include <bits/stdc++.h>
using namespace std;

void findLargestSubarray(vector<int> &nums, int k){
    map<int, int> mp;
    int sum=0;
    int rem=0;
    int max_len=0;
    mp.insert({0,-1});
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        rem = sum%k;

        if(rem<0){
            rem+=k;
        }
        if(mp.find(rem)!=mp.end()){
            //if rem is present in map mp
            auto itr = mp.find(rem);
            int index = itr->second;
            int len = i-index;
            if(len>max_len){
                max_len=len;
            }
        }else{
            mp.insert({rem,i});
        }
    }
    cout<<max_len<<endl;
}

int main()
{
    vector<int> nums{-2, 2, -5, 12, -11, -1, 7};
    int k=3;
    findLargestSubarray(nums,k);
    return 0;
}