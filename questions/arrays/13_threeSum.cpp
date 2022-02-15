/*
Given an array and a value, find if there is a triplet in array whose sum is equal to the given value. 
If there is such a triplet present in array, then print the triplet and return true. Else return false.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }

    bool found = false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int low=i+1,high=n-1;
        while(low<high){
            int current = a[i]+a[high]+a[low];
            if(current == target){
                found = true;
            }
            if(current<target){
                low++;
            }else{
                high--;
            }
        }
    }
    if(found)
        cout<<"True";
    else
        cout<<"False";

    return 0;
}