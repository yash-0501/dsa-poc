//Check if given number is power of 2

#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    return (n && !(n&n-1));
}

int main()
{
    cout<<check(32)<<endl;
    cout<<check(21)<<endl;
    return 0;
}