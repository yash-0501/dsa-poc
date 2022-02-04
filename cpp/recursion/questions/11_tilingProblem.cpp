/* 
Given a "2xn" board and tiles of size "2x1", count the
number of ways to tile the given board using these tiles.
*/

#include <bits/stdc++.h>
using namespace std;

int countWays(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return countWays(n-1)+countWays(n-2);
}

int main()
{
    cout<<countWays(4);
    return 0;
}