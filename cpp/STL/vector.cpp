#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"\n";
    }

    //Iterator
    vector<int>::iterator it; //iterator it is pointer
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }

    //using auto keyword
    for(auto element:v){
        cout<<element<<endl;
    }

    v.pop_back();

    vector<int> v2(3,50); //50,50,50

    swap(v,v2); //swaps values of two vectors
    cout<<"v: ";
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<"\nv2: ";
    for(auto element:v2){
        cout<<element<<" ";
    }
    cout<<endl;

    sort(v2.begin(),v2.end());

    return 0;
}