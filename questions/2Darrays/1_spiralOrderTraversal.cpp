/*

1   20   7
20  6    5
8   19   20

1->20->7->5->20->19->8->20->6

*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int rowStart = 0, colEnd=m-1, rowEnd=n-1, colStart=0;

    while(rowStart<=rowEnd && colStart<=colEnd){
        // for row start
        for(int col=colStart;col<=colEnd;col++){
            cout<<a[rowStart][col]<<" ";
        }
        rowStart++;
        //colEnd
        for(int row=rowStart;row<=rowEnd;row++){
            cout<<a[row][colEnd]<<" ";
        }
        colEnd--;
        //rowEnd
        for(int col=colEnd;col>=colStart;col--){
            cout<<a[rowEnd][col]<<" ";
        }
        rowEnd--;
        //colStart
        for(int row=rowEnd;row>=rowStart;row--){
            cout<<a[row][colStart]<<" ";
        }
        colStart++;
    }

    return 0;
}

