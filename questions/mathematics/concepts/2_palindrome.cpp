/* 

Palindrome number 

121 == 121 returns 1
125 == 521 return 0

*/

#include <iostream>
using namespace std;

int checkPalindrome(int n)
{
    int num = n, d, rev = 0;
    while (num != 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    if (rev == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout<<"ENTER A NUMBER to check PALINDROME\n";
    cin>>n;
    checkPalindrome(n) ? cout << n <<" is a palindrome number" : cout<< n <<" is not a palindrome";
    
    return 0;
}