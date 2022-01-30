// set bit at ith position


#include <bits/stdc++.h>
using namespace std;
 
int setBit(int n, int pos){
    int mask = 1<<pos;
    return (n|mask);
}

int main()
{   
    cout<<setBit(5,1);
    return 0;
}