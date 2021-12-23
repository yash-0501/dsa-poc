/* 
Euclid's method 

gcd(a,b) = gcd(a-b,b) if a>b


Also GCD(a,b) = GCD(b,a%b) ----> while (a%b!=0)

*/

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    return (b == 0) ?a:gcd(b, a % b);
}

int main()
{
    cout<<gcd(24, 60);
    return 0;
}