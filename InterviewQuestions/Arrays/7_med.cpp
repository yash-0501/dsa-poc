/*
The next permutation of an array of integers is the next lexicographically
greater permutation of its integer. More formally, if all the permutations
of the array are sorted in one container according to their lexicographical order,
then the next permutation of that array is the permutation that follows it in the
sorted container. If such arrangement is not possible,
the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

NEXT PERMUTATION PROBLEM - Leet Code
*/

#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &arr)
{
    int n=arr.size(), i,j;
    for(j=n-2;j>=0;j--){
        if(arr[j]<arr[j+1])
            break;
    }
    if(j<0){
        reverse(arr.begin(),arr.end());
    } else{
        for(i=n-1;i>j;i--){
            if(arr[i]>arr[j])
                break;
        }
        swap(arr[j],arr[i]);
        reverse(arr.begin()+j+1,arr.end());
    }
    for(auto& it : arr)
        cout<<it<<" ";
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    nextPermutation(arr);
    return 0;
}