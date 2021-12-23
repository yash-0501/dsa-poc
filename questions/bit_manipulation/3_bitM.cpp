/* Q3. Find the only non-repeating element 
in an array where every other element repeats thrice or k=3 times */
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int find(unsigned int a[], int n, int k){
    
    int INT_SIZE =  8*sizeof(unsigned int);
    int count[INT_SIZE];
    memset(count, 0, sizeof(count));
    for(int i=0;i<INT_SIZE;i++){
        for(int j=0;j<n;j++){
            if( (a[j]& (1<<i)) != 0)
                count[i]+=1;
        }
    }
    unsigned res = 0;
    for(int i=0;i<INT_SIZE;i++){
        res+=(count[i]%k)*(1<<i);
    }
    return res;
}

int main()
{
    unsigned int a[] = { 6, 2, 5, 2, 2, 6, 6 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    cout << find(a, n, k);
    return 0;
}