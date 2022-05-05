//Given an integer array nums, find the contiguous subarray 
// (containing at least one number) which has the largest sum and return its sum.

#include <bits/stdc++.h>
using namespace std;

void getMaxSum(int a[], int n){
    int currSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=a[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(currSum,maxSum);
    }

    cout<<maxSum;

}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    getMaxSum(a,n);
    return 0;
}