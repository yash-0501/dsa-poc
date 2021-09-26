#include <iostream>
using namespace std;

int find(int arr[], int len, int x){
    for(int i=0;i<len;i++){
        if(arr[i]==x){
            return i;
        } 
    }
    return -1;
}

int main(){
    int arr[] = {5,2,1,4,6,3,7,10,9,8};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter a number between 1 - 10: ";
    cin>>x;
    int res = find(arr, len, x);
    if(res==-1)
        cout<<"Number not found";
    else
        cout<<"Number found at pos: "<<res<<endl;
    return 0;
}