// n=0101 i=1 , update to 1


#include <bits/stdc++.h>
using namespace std;
 
int updateBit(int n, int pos,int value){
    int mask = ~(1<<pos);
    n=n&mask; //cleared
    // now set
    return (n | (value<<pos));
}

int main()
{   
    cout<<updateBit(5,1,1);
    return 0;
}