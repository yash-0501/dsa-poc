/* 
Find thenumber of ways in which n friends can remain single or can be paired up.
*/

#include <bits/stdc++.h>
using namespace std;

int friendsPairng(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    return friendsPairng(n-1)+friendsPairng(n-2)*(n-1);
    // n-1 => left first person single
    // n-2 => paired first person with someone (n-1 ways to pair).

    
}

int main()
{
    cout<<friendsPairng(4);
    return 0;
}