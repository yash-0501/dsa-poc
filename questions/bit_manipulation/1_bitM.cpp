/* Question  Find the only non-repeating element 
in an array where every other element repeats twice.*/

#include<iostream>
using namespace std;

int find(int arr[], int arr_size){
    int res=arr[0];
    for(int i=1;i<arr_size;i++){
        res=res^arr[i];
    }
    return res;
}

int main()
{
    int arr[]={4,1,4,1,5,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Non repeating element is: "<<find(arr,n)<<endl;
    return 0;
}

