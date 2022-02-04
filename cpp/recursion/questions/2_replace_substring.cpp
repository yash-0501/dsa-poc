/* 
Replace pi with 3.14 in string
Input ---> Output
"pippxxxppiixipi" --> "3.14ppxxxp3.14ixi3.14"
*/


#include <bits/stdc++.h>
using namespace std;

void replace(string s){
    if(s.length()==0){
        return;
    } 
    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        replace(s.substr(2));
    }else{
        cout<<s[0];
        replace(s.substr(1));
    }
    
}

int main()
{
    replace("pippxxxppiixipi");
    return 0;
}