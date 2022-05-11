//Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

#include <bits/stdc++.h>
using namespace std;

int find(vector<int>& a, int k){
    sort(a.begin(),a.end(), greater<int>());
    return a[k-1];
}

int main()
{
    vector<int> a;
    int k=4;
    a = {3,2,3,1,2,4,5,5,6};
    cout<<find(a,k);
    return 0;
}