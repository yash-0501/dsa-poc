/* how many numbers between
1 and 1000 are divisible by 5 and 7?*/

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n=1000, a=5,b=7;
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    cout<<(c1+c2-c3)<<endl;
    return 0;
}