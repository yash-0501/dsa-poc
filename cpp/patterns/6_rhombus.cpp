/*

       ****
      ****
     ****
    ****
   ****


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
            cout<<" ";
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}