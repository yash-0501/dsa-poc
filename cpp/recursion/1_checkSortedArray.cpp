#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n){

    if(n==1){
        return true;
    }

    bool restArr = check(arr+1, n-1);
    return (arr[0]<arr[1] && restArr);
}

int main()
{
    int arr[]={1,2,3,4,5};
    cout<<check(arr,5);
    return 0;
}