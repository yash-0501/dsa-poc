/*Given an integer A, count and return the number of trailing zeroes.*/

#include<iostream>
#include<cmath>
using namespace std;

int find(unsigned int n){
    int mask;
    int count = 0;
    int nBits = (int)log2(n)+1;
    for(int i=0;i<nBits;i++){
        mask = 1<<i;
        if(n&mask){
            break;
        }else{
            count+=1;
        }
    }
    return count;
}

int main()
{   
    int n=81;
    cout<<"No of trailing zeroes: "<<find(n);
    return 0;
}