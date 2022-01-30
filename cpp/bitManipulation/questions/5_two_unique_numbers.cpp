/* Find two unique number in an array where all 
numbers repeat twice except two.
*/

#include <bits/stdc++.h>
using namespace std;

int getBit(int n, int pos){
    return (n & (1<<pos))!=0;
}

void twoUnique(int arr[], int n){
   int xorsum=0;
   for(int i=0;i<n;i++){
       xorsum = xorsum^arr[i];
   }
   int tempxor = xorsum;
    //find right most set bit
    int setbit=0;
    int pos = 0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum>>1;
    }
    //get first unique number
    int newxor =  0;
    for(int i=0;i<n;i++){
       if(getBit(arr[i],pos-1)){
           newxor=newxor^arr[i];
       }
   }
    cout<<newxor<<" "<<(tempxor^newxor)<<endl;

} 
int main()
{
    int arr[10]={2,4,6,3,7,3,5,4,6,2};
    twoUnique(arr,10);
    
    return 0;
}