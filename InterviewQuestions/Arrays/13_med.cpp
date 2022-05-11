//Given an integer array nums, find a contiguous non-empty 
//subarray within the array that has the largest product, and return the product.

#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int ans = nums[0];
    int ma=ans;
    int mi=ans;
    
    int n = nums.size();
    for(int i=1;i<n;i++){
        if(nums[i]<0){
            swap(ma,mi);
        }
        ma = max(nums[i],ma*nums[i]);
        mi = min(nums[i],mi*nums[i]);
        ans=max(ans,ma);
    }
    return ans;
}

int main()
{
    vector<int> a{2,-3,0,3,2};
    cout<<maxProduct(a);
    return 0;
}