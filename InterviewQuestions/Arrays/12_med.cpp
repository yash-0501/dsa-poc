// Given an integer array nums, return an array answer such that answer[i] is 
// equal to the product of all the elements of nums except nums[i].

#include <bits/stdc++.h>
using namespace std;

void prod(vector<int>& nums){
    int n = nums.size();
    vector<int>prod(n,1);
    int temp = 1;

    //left half
    for(int i=0;i<n;i++){
       prod[i]*=temp;
       temp*=nums[i]; 
    }
    for(auto& it: prod){
        cout<<it<<" ";
    }
    cout<<endl;
    temp=1;
    //right half
    for(int i=n-1;i>=0;i--){
        prod[i]*=temp;
        temp*=nums[i];
    }

    for(auto& it: prod){
        cout<<it<<" ";
    }

}

int main()
{
    vector<int> a = {1,2,3,4};
    prod(a);
    return 0;
}