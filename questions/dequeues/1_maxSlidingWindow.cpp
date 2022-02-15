#include <bits/stdc++.h>
using namespace std;

void maxSlidingWindow(vector<int> &nums, int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0; i<nums.size();i++){
        //out of bounds
        if(!dq.empty() && dq.front() == i-k)
            dq.pop_front();
        
        //removes elements lesser than nums[i]
        while(!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();
        dq.push_back(i);
        if(i>=k-1)
        ans.push_back(nums[dq.front()]);
    }   
    for(auto i:ans){
        cout<<i<<" ";
    } cout<<endl;
}

int main()
{
    vector<int> arr={-3,2,3,4,5,12,2,4};
    maxSlidingWindow(arr,3);
    return 0;
}