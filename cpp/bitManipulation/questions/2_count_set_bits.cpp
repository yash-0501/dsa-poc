/*
Count the number of set bits in binary representation of a number.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n=7;
    int count=0;
    while(n!=0){
        n=n&n-1;
        count++;
    }
    cout<<count;   
    return 0;
}