/* 
Given an n x m matrix and a number x,
find the position of x in the matrix if it is 
present in it. Otherwise, print “Not Found”. 
In the given matrix, every row and 
column is sorted in increasing order.
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int x;
    cin>>x;
    int mat[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    //Top right position
    int r=0, c=m-1;
    bool flag=false;
    while(r<n and c>=0){
        if(mat[r][c]==x){
            flag=true;
            break;
        }
        if(mat[r][c]>x){
            c--;
        }else{
            r++;
        }
    }

    cout<<flag;
    return 0;
}
