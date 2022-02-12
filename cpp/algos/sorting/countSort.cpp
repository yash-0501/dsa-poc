#include <bits/stdc++.h>
using namespace std;

void countSort(vector <int> arr){
    int k=arr[0];
    for(int i=0;i<arr.size();i++){
        k=max(k,arr[i]);
    }
    vector<int> count(arr.size(),0);
    for(int i=0;i<arr.size();i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }

    vector <int> output(arr.size(),0);
    for(int i=arr.size()-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    swap(arr,output);
    for(auto element:arr){
        cout<<element<<" ";
    }
    cout<<endl;
}

int main()
{
    vector<int> v{1,3,2,3,4,1,6,4,3};
    countSort(v);

    
    return 0;
}