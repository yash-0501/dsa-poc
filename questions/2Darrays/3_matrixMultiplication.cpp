#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int A[n1][n2];
    int B[n2][n3];
    
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++)
        cin>>A[i][j];
    }
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++)
        cin>>B[i][j];
    }

    int res[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++)
        res[i][j]=0;
    }


    for (int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                res[i][j]+=A[i][k]*B[k][j];
            }  
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++)
            cout<<res[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}