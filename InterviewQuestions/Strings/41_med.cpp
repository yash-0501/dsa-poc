// Given two strings S and P. Find the smallest window in the string S consisting 
// of all the characters(including duplicates) of the string P.  
// Return "-1" in case there is no such window present. In case there are multiple 
// such windows of same length, return the one with the least starting index. 

#include <bits/stdc++.h>
using namespace std;

string smallestWindow(string s,string p){
    int pHash[256]={0};
    int sHash[256]={0};
    int pCount=p.size(),matchCount=0;
    string res="";
    for(int i=0;i<pCount;i++){
        pHash[p[i]]+=1;
    }
    int i=-1,j=-1;
    int n=s.size();
    while(true){
        bool flag1=false;
        bool flag2=false;

        //acquire
        while(i<n-1 && matchCount<pCount){
            i++;
            sHash[s[i]]+=1;
            if(pHash[s[i]]!=0 && pHash[s[i]]>=sHash[s[i]]){
                matchCount+=1;
            }
            flag1=true;
        }
        //release and collect ans
        while(j<i && matchCount==pCount){
            string temp = s.substr(j+1,i-j);
            if(temp.length()<res.length() || res.length()==0){
                res=temp;
            }
            j++;   
                sHash[s[j]]-=1;

            if(pHash[s[i]]!=0 && sHash[s[j]]<pHash[s[j]]){
                matchCount-=1;
            }
            flag2=true;
        }
        if(flag1==false && flag2==false){
            break;
        }
    }
    if(res==""){
        return "-1";
    }
    return res;
}

int main()
{
    string s,p;
    getline(cin,s);
    getline(cin,p);
    cout<<smallestWindow(s,p);
    return 0;
}