//Given an array of n integers where each value represents the 
//number of chocolates in a packet. Each packet can have a variable 
//number of chocolates. There are m students, the task is to distribute 
//chocolate packets such that: 

//Each student gets one packet.
// The difference between the number of chocolates in the packet with 
// maximum chocolates and packet with minimum chocolates given to 
// the students is minimum.

#include <bits/stdc++.h>
using namespace std;
int distribute(vector<int>& nums,int n,int m) {
    sort(nums.begin(), nums.end());
    int i=0,j=n-1,min;
   for (int i = 0; i + m - 1 < n; i++) {
        int diff = nums[i + m - 1] - nums[i];
        if (diff < min)
            min = diff;
    }
    return min;
} 

int main()
{
    int n,m;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    cin>>m;
    cout<<distribute(nums,n,m);
    return 0;
}