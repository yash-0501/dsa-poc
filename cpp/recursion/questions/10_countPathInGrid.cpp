/* 
Count the number of paths to  move from points (i,j)start to (n,n)end in a grid.
Only possible steps are down and right.
*/

#include <bits/stdc++.h>
using namespace std;

int countPath(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n){
        return 0;
    }
    return countPath(n,i+1,j)+countPath(n,i,j+1);
}

int main()
{
    cout<<countPath(3,0,1);
    return 0;
}