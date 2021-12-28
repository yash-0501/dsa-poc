/*

You're given an array arr[] of N integers including 0.
The task is to find the smallest positive number
missing from the array.

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    vector<bool>check(1e6+2,false);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<n;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}