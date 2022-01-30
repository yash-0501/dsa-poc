/* Find a unique number in an array where all 
numbers repeat twice except one.
*/

#include <bits/stdc++.h>
using namespace std;
int unique(int arr[], int n){
   int xorsum=0;
   for(int i=0;i<n;i++){
       xorsum = xorsum^arr[i];
   }
   return xorsum;
} 
int main()
{
    int arr[9]={2,4,6,3,3,5,4,6,2};
    cout<<unique(arr,9);
    
    return 0;
}