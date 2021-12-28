/*

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5


*/


#include<iostream>
using namespace std;
 
int main()
{
    cout<<"Enter a number n.\n";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int space=1;space<=n-i;space++)
            cout<<"  ";
        for(int k=i;k>=1;k--){
            cout<<k<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}