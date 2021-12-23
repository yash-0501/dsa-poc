/* Factorial of a number 

243! 
Get trailing zeros -- 2*5 = 10

No of trailing zeros = [n/5]+[n/25]+[n/125]+.....

*/
#include<iostream>
using namespace std;
 
int main()
{   
    int n = 20;
    int res = 0;
    for(int i=5;i<=n;i=i*5){
        res = res + n/i;
    }
    cout<<res<<endl;
    return 0;
}
