//Given an integer array nums and an integer k, return the kth smallest element in the array.

// Note that it is the kth smallest element in the sorted order, not the kth distinct element.

#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& a, int k){
    sort(a.begin(),a.end());
    return a[k-1];
}

int main()
{
    vector<int> a;
    int k=3;
    a = {7,10,4,3,20,15};
    cout<<find(a,k);
    return 0;
}