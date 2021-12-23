/*Q2. Find the two non-repeating elements in 
an array where every other element repeats twice */

#include<iostream>
using namespace std;

void find(int arr[], int n){
    int Xor = arr[0];
    int i, set_bit;
    int x=0, y=0;
    for(i=1;i<n;i++){
        Xor ^= arr[i]; 
    }

    // get lowest set bit in set_bit
    set_bit = Xor & ~(Xor-1);

    // divide elements in two sets
    for (i=0;i<n;i++)
    {
        if(arr[i] & set_bit)
            x=x^arr[i];
        else
            y=y^arr[i];
    }
    cout<<"Two non-repeating elements are: "<<x<<" "<<y<<endl;
}


int main()
{
    int arr[] = { 2, 3, 7, 9, 11, 2, 3, 11 };
    int n = sizeof(arr) / sizeof(*arr);
    find(arr,n);
    return 0;
}