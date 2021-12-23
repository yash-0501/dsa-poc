/*
Given an integer array A of N integers, find the pair of integers
in the array which have minimum XOR value. Report the minimum XOR value.

Input Format: First and only argument of input contains an integer array A

Output Format: return a single integer denoting minimum xor value

Constraints:
2 <= N <= 100 000  
0 <= A[i] <= 1 000 000 000

For Examples :
Example Input 1:
    A = [0, 2, 5, 7]
Example Output 1:
    2
Explanation:
    0 xor 2 = 2

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int*  b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int Partition(int* A, int lb, int ub){
    int pivot = A[lb];
    int start = lb;
    int end = ub;
    while(start<end){
        while(A[start]<=pivot){
            start++;
        }
        while(A[end]>pivot){
            end--;
        }if(start<end){
            swap(&A[start],&A[end]);
        }
    }
    swap(&A[lb],&A[end]);
    return end;
}

void Qsort(int* A, int lb, int ub){
    int loc;
    if(lb<ub){
        loc = Partition(A,lb,ub);
        Qsort(A,lb,loc-1);
        Qsort(A,loc+1,ub);
    }
}

int min(int a, int b){
    return a>b?b:a;
}

int findMinXOR(int* arr, int n){
    // sort(A,A+n);  using sort function
    Qsort(arr,0,n-1);
    int minXor = INT_MAX;
    int val = 0;
 
    // calculate min xor of consecutive pairs
    for (int i = 0; i < n - 1; i++) {
        val = arr[i] ^ arr[i + 1];
        minXor = min(minXor, val);
    }
 
    return minXor;
}

int main()
{   
    int A[]={492416, 275153, 684032, 319360, 543232, 804480, 525824, 671825, 1036753, 940625, 909521, 405120, 1076689, 80081, 57856, 1000145, 13649, 596049, 429649, 289489, 907136, 261120, 1247313, 902609, 576465, 1133696, 1128576, 877440, 1058432, 554449, 1206225, 1007953, 1066705, 1237329, 491601, 300753, 789073, 1233408, 513617, 657152, 993664, 93568, 324689, 457169, 254208, 1250560, 217169, 557568, 416896, 256465, 687313, 21888, 433536, 276224, 536145, 466304, 3200, 162176, 341376, 589824, 1075840, 411345, 401873, 52561, 653649, 1077376, 1011456, 339281, 297472, 931200, 869969, 1131601, 326272, 94801, 1246464, 646400, 727040, 1001856, 120192, 1093585, 309632, 313169, 160977, 1102720, 1126993};
    int n=sizeof(A)/sizeof(A[0]);
    cout<<findMinXOR(A,n);
    return 0;
}