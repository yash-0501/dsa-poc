/*
Get nth bit of a number.
*/

#include <bits/stdc++.h>
using namespace std;
 
int getBit(int n, int pos){
    int mask = 1<<pos;
    return ((n&mask)!=0);
}

int main()
{   
    cout<<getBit(5,1);
    return 0;
}