/*

Count the number of paths possible from starting point to end point in a board game.


*/

#include <bits/stdc++.h>
using namespace std;

int countPath(int start, int end){
    if(start==end){
        return 1;
    }
    if(start>end){
        return  0;
    }

    int count=0;
    for(int i=1;i<=6;i++){
        count+=countPath(start+i,end);
    }
    return count;
}

int main()
{
    cout<<countPath(0,3);
    return 0;
}