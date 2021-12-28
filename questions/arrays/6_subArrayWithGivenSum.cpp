/*

Given an unsorted array A of size N of non-negative integers,
find a continuous subarray which adds to a given number S.

n=5
s=12
a={1,2,3,7,5}

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int i=0,j=0;
    int start=-1,end=-1;
    while(j<n && sum+a[j]<s){
        sum+=a[j];
        j++;
    }    
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        sum+=a[j];
        while(sum>s){
            sum-=a[i];
            i++;
        }

        if(sum==s){
            start=i;
            end=j;
            break;
        }
        j++;
    }

    cout<<start<<" "<<end;

    return 0;
}