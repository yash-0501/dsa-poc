// Given a sentence in the form of a string, convert it into its equivalent mobile numeric keypad sequence. 
 

#include <bits/stdc++.h>
using namespace std;

void numeric(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    map<char, int> mp;
    mp.insert(pair<char, int>('a',2));
    mp.insert(pair<char, int>('b',22));
    mp.insert(pair<char, int>('c',222));
    mp.insert(pair<char, int>('d',3));
    mp.insert(pair<char, int>('e',33));
    mp.insert(pair<char, int>('f',333));
    mp.insert(pair<char, int>('g',4));
    mp.insert(pair<char, int>('h',44));
    mp.insert(pair<char, int>('i',444));
    mp.insert(pair<char, int>('j',5));
    mp.insert(pair<char, int>('k',55));
    mp.insert(pair<char, int>('l',555));
    mp.insert(pair<char, int>('m',6));
    mp.insert(pair<char, int>('n',66));
    mp.insert(pair<char, int>('o',666));
    mp.insert(pair<char, int>('p',7));
    mp.insert(pair<char, int>('q',77));
    mp.insert(pair<char, int>('r',777));
    mp.insert(pair<char, int>('s',7777));
    mp.insert(pair<char, int>('t',8));
    mp.insert(pair<char, int>('u',88));
    mp.insert(pair<char, int>('v',888));
    mp.insert(pair<char, int>('w',9));
    mp.insert(pair<char, int>('x',99));
    mp.insert(pair<char, int>('y',999));
    mp.insert(pair<char, int>('z',9999));
    mp.insert(pair<char, int>(' ',0));

    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]))
            cout<<s[i];
        else
            cout<<mp[s[i]];
    }

}

int main()
{
    string s="OFCXD";
    numeric(s);
    return 0;
}