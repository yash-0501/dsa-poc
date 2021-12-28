/*

Sarasvati learned about arithmetic arrays. 
An arithmetic array is an array that contains at least two 
integers and the differences between consecutive integers are equal. 
For example, [9,10], [3,3,3], and [9,7,5,3] are arithmetic arrays,
while [1,3,3,7], [2,1,2], and [1,2,4] are not.

Sarasvati again has an array of N non-negative integers. 
The i-th integer of the array is Ai. She can replace at most one 
element in the array with any (possibly negative) integer she wants.

For an array A, Sarasvati defines a subarray as any contiguous part of A. 
Please help Sarasvati determine the length of the longest 
possible arithmetic subarray she can create by replacing at
most one element in the original array.

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        a.push_back(input);
    }

    int ans = 2;
    int prevDiff = a[1]-a[0];
    int j=2;
    int currLen = 2;

    while(j<n){

        if(prevDiff==a[j]-a[j-1])
            currLen++;
        else{
            prevDiff = a[j]-a[j-1];
            currLen=2;
        }
        ans = max(ans,currLen);
        j++;
    }
    cout<<ans;
    return 0;
}