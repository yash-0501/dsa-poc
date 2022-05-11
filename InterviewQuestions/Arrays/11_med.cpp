// Given n non-negative integers representing an elevation map where 
// the width of each bar is 1, compute how much water it can trap after raining

#include <bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int amount=0;
    int low=0, high=height.size()-1;
    int max_left=0, max_right=0;
    while(low<=high){
        if(height[low]<height[high]){
            if(max_left<=height[low]){
                max_left=height[low];
        }else{
            amount+=max_left-height[low];
        }
        low++;
        }else{
            if(height[high]>=max_right){
                max_right=height[high];
            }else{
                amount+=max_right-height[high];
            }
            high--;
        }
    }
    return amount;
}
int main()
{
    vector<int> a = {4,2,0,3,2,5};
    cout<<trap(a);
    return 0;
}