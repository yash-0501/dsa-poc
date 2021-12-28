/* 

Given an array a[] of size n. Outpt sum of each subarray of the given array.

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    vector<int> a;
    int n;
    cin>>n;
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        a.push_back(input);
    }

    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=a[j];
        }
    }
    cout<<sum;

    return 0;
}