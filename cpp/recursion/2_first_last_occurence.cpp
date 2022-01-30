/* 
Find the first and last occurence of a number in an array.
*/

#include <bits/stdc++.h>
using namespace std;

void findSecond(int arr[], int n, int key){
    if(n-1==-1){
        cout<<"Key not found.\n";
        return;
    }
    if(arr[n-1]==key){
        cout<<"Last occurence at: "<<n-1<<endl;
        return;
    }
    findSecond(arr,n-1,key);
}

void findFirst(int arr[], int n, int i, int key){

    if(i==n){
        cout<<"Key not found."<<endl;
        return;
    }
    if(arr[i]==key){
        cout<<"First occurence at: "<<i<<endl;
        findSecond(arr, n, key);
        return;
    }
    return findFirst(arr, n, i+1, key);
}

int main()
{
    int arr[]={4,1,2,2,5,2,7};
    int x1=2;
    findFirst(arr,7,0,x1);
    return 0;
}