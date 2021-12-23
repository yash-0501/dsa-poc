/*Reverse the bits of an 32 bit unsigned integer A.*/


#include<iostream>
#include<cmath>
using namespace std;

unsigned int reverse(unsigned int n){
    int mask,i;
    int res=0;
    int count = 0, size=32, arr[size], s=size;
    while(size!=0){
        arr[count]=n&1;
        n>>=1;
        count+=1;
        size-=1;
    }
    for(i=0;i<s;i++){
        res<<=1;
        res=res|arr[i];
    }
    return res;
}

int main()
{   
    unsigned int n=11;
    cout<<"Reversed number after bits are reversed: "<<reverse(n);
    return 0;
}