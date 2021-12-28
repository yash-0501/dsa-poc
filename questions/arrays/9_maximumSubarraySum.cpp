/*  
Find subarray in an array with maximum sum.
*/

/*

Print all the possible subarrays of array A[] of size n;

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int a[n];
    int subArr[n];
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0,count=0;
            vector<int>arr(n,0);
            for(int k=i;k<=j;k++){
                arr[count++]=a[k];
                sum+=a[k];
            }
            if(sum>maxSum){
                maxSum=sum;
                for(int k=0;k<n;k++){
                    subArr[k]=arr[k];
                }
            }
        }
    }
    cout<<maxSum<<endl;
    for(int k=0;k<n;k++){
        cout<<subArr[k];
    }
    
    return 0;
}