#include <iostream>
using namespace std;

int findBinary(int arr[], int len, int x){
    int low = 0, high = len-1, mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            return mid;
        } if(arr[mid]<x){
            low=mid+1;
        } else{
            high=mid-1;
        }
    }
    return -1;

}



int main(){
    int arr[] = {12,24,27,56,65,255,450,780};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x=780;
    int res = findBinary(arr, len, x);
    if(res==-1)
        cout<<"Number not found";
    else
        cout<<"Number found at pos: "<<res<<endl;
    return 0;
}