/* 
Question - We define f(X, Y) as number of different corresponding bits 
in binary representation of X and Y. For example, f(2, 7) = 2,
since binary representation of 2 and 7 are 010 and 111, respectively.
The first and the third bit differ, so f(2, 7) = 2.
You are given an array of N positive integers, A1, A2 ,…, AN.
Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N.
Return the answer modulo 109+7.

For example,
A=[1, 3, 5]
We return

f(1, 1) + f(1, 3) + f(1, 5) + 
f(3, 1) + f(3, 3) + f(3, 5) +
f(5, 1) + f(5, 3) + f(5, 5) =
0 + 1 + 1 +
1 + 0 + 2 +
1 + 2 + 0 = 8 
*/

#include<iostream>
using namespace std;

// int getDiff(int n1,int n2){
//     int temp = n1^n2;
//     int count=0;
//     while(temp!=0){
//         if(temp&1)
//         count+=1;
//         temp>>=1;
//     }
//     return count;
// }

//----------Time Complexity Failed-------- (Correct Solution????)

/* int cntBits(int *A, int n){
    int i,j,a1,a2,sum=0;
    for(i=0;i<n;i++){
        a1=A[i];
        for(j=0;j<n;j++){
            a2=A[j];
            sum+=getDiff(a1,a2);
        }
    }
    return sum;
} */
#define mod 10000000007
int cntBits(int *A, int n){
    int i,j,sum=0,bit;
    
    for(i=0;i<31;i++){
        long long z=0,o=0;
        for(j=0;j<n;j++){
            bit=(A[j]>>i);
            if(bit&1){
                o++;
            }else{
                z++;
            }
        }
        sum=( sum+ ((z*o)%mod) )%mod;
    }
    return (2*sum)%mod;
}

int main()
{
    int A[]= {1,3,5};
    cout<<"Hello "<<cntBits(A,3);
    return 0;
}