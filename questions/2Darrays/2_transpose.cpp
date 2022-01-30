/*  
Given a square matrix A and its number of rows/columns N,
return transpose of A.

2 5 3       2 1 4
1 2 5  ==>  5 2 8
4 8 9       3 5 9
*/

#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    int A[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>A[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}