/*Write a function that takes an integer 
and returns the number of 1 bits it has.*/

#include<iostream>
#include<cmath>
using namespace std;

int setBits(unsigned int n){
    int mask;
    int count = 0;
    int nBits = (int)log2(n)+1;
    for(int i=0;i<nBits;i++){
        mask = 1<<i;
        if(n&mask){
            count+=1;
        }
    }
    return count;
}

int main()
{   
    int n=5;
    cout<<"No of set bits: "<<setBits(n);
    return 0;
}