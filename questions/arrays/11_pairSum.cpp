/*

Check if there exists two elements in an 
array such that their sum is equal to k.

O(n) -> sort the array

*/
#include <bits/stdc++.h>
using namespace std;

bool pairSum(int arr[], int n, int k){
    int low=0, high=n-1;
    while(low<high){
        if(arr[low]+arr[high]<k){
            low++;
        }else if(arr[low]+arr[high]>k){
            high--;
        }else{
            cout<<low<<" "<<high<<endl;
            return true;
        }
    }
    return false;
}

int main()
{
    int k=33;
    int arr[] = {2,4,7,11,14,16,20,21};
    cout<<pairSum(arr,8,k);
    return 0;
}