/* move all x to end of the string 

"axxbdxcefxhix" ==> "abdcefhixxxxx"

*/

#include <bits/stdc++.h>
using namespace std;
string moveAll(string s){
    if(s.length()==0){
        return "";
    }
    char ch = s[0];
    string ans = moveAll(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
} 
int main()
{
    cout<<moveAll("axxbdxcefxhix");
    return 0;
}