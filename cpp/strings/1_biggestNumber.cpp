/* 

Form the biggest number from the numeric string.

"53214" --> 54321

*/
#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    string s = "523641";
    sort(s.begin(),s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}