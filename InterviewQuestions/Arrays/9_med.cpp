//You are given a read only array of n integers from 1 to n.
// Each integer appears exactly once except A which appears twice and B which is missing.
// Return A and B.


#include <bits/stdc++.h>
using namespace std;

void find(vector<int>& a){
    //a = {3,2,1,3,5}
    //A=3
    //B=4

    int n=a.size();
    
    int A=0,B;
    for(int i=0;i<n;i++){
        A^=a[i];
        A^=(i+1);
    }
    //A = 3xor4 - after loop
    
    //get last set bit
    int setBit = A&(~(A-1));
    
    A=0,B=0;
    for(int i=0;i<n;i++){
        if(a[i]&setBit){
            A^=a[i];
        }else{
            B^=a[i];
        }
        if((i+1)&setBit)
            A^=(i+1);
        else
            B^=(i+1);
    }
    for(int i=0;i<n;i++){
        if(A==a[i])
            break;
        if(a[i]==B)
            {
                A=A^B;
                B=B^A;
                A=B^A;
                break;
            }
    }
    cout<<A<<" "<<B;


}

int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back(val);
    }
    find(a);
    return 0;
}