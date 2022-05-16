// Given an array that is sorted and then rotated around an unknown point. 
// Find if the array has a pair with a given sum ‘x’. 
// It may be assumed that all elements in the array are distinct.

#include <bits/stdc++.h>
using namespace std;

void pairSum(vector<int> nums,int x){
    int i=0,j=nums.size()-1;
    sort(nums.begin(),nums.end());
    while (i<j)
    {
        if(nums[i]+nums[j]==x){
            cout<<nums[i]<<" "<<nums[j];
            return;
        }
        if(nums[i]+nums[j]>x)
            j--;
        else
            i++;
    }
    cout<<-1;
}

int main()
{
    vector<int> nums {2,4,51,41,31,3};
    int x = 6;
    pairSum(nums,x);
    return 0;
}