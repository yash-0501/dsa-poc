//Given the sorted rotated array nums of unique elements, return the minimum element of this array.

// You must write an algorithm that runs in O(log n) time.

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& nums){
    int high=nums.size()-1;
    int low=0;
    int mid;
    
    while(low<high){
        mid=low+(high-low)/2;
        if(mid<high && nums[mid+1]<nums[mid]){
            return nums[mid+1];
        }
        if(nums[mid]<nums[mid-1] && mid>0){
            return nums[mid];
        }
        if(nums[mid]>nums[high]){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return nums[low];
}

int main()
{
    vector<int> nums{1,2};
    //1,2,3,4,5
    //5,1,2,3,4
    //4,5,1,2,3
    //3,4,5,1,2
    //2,3,4,5,1
    cout<<findMin(nums);
    return 0;
}