//Write a program to reverse an array or string

#include <bits/stdc++.h>
using namespace std;

void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j=temp;
}

void reverse(int a[], int n){
    int i=0,j=n-1;
    while(j>i){
        swap(&a[i],&a[j]);
        i++;
        j--;
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a,n);
    return 0;
}