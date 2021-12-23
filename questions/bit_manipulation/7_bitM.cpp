/* Divide two integers without using
 multiplication, division and mod operator.
Return the floor of the result of the division. */

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
  
int divide(int a, int b){

    int quotient=0,n=b;
    int sign = (a<0 ^ b<0)?-1:1;
    if(a==INT_MIN && b==-1){
        return INT_MAX;
    }
    a=abs(a);
    b=abs(b);

    while(a-b>=0){
        int count = 0;
        // b<<1 = (b*2) => (b<<1<<count)=(b*2)*power(2,count)
        while(a-(b<<1<<count)>=0){
            count+=1;
        }
        // 1<<i = 2^i (2 raise to i)
        quotient+=1<<count;
        // b<<count = b*2^count
        a-=b<<count;
    }
    quotient = quotient*sign;
    return quotient;
}

int main()
{   cout<<"Division of 41 and 2 is:  "<<divide(INT_MIN,-1)<<endl;
    cout<<"Division of 41 and -2 is:  "<<divide(41,-2);
    return 0;
}