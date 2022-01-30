#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // declaration
    string str="hello world";
    string str1(5, 'n'); /* 5 times n*/

    //Input
    string str2;
    getline(cin,str2); //Inputs whole sentence as 1
    cout<<str2<<endl;


    //Functions
    string s1="Fam", s2="ily";

    //concatenate two strings
    s1.append(s2);
    cout<<s1<<endl;
    cout<<s1+s2<<endl;

    cout<<s1[1]<<endl;

    //clear
    s1.clear();
    cout<<s1<<endl;
    cout<<"s1 was cleared!"<<endl;

    //compare
    string a="abc", b="xyz";
    cout<<a.compare(b)<<endl;
    
    //empty
    if(s2.empty())
        cout<<"String is empty"<<endl;
    else
        cout<<"String is not empty"<<endl;

    //erase
    string strA = "nincompoop";
    strA.erase(3,2); //2 characters from 3rd pos
    cout<<strA<<endl;

    //find
    cout<<strA.find("o")<<endl;

    //insert
    strA.insert(2,"lol");
    cout<<strA<<endl;

    //size
    cout<<strA.length()<<endl;
    cout<<strA.size()<<endl;

    //substring
    string res = strA.substr(7,4);
    cout<<res<<endl;

    //int conversion
    string n = "786";
    int x = stoi(n);
    cout<< x+2<<endl;

    //to string
    cout<<to_string(x)+"2"<<endl;

    //sort
    sort(strA.begin(), strA.end());
    cout<<strA<<endl;

    //case conversion
    //to upercase
    string A1 = "hfbahjhahkdjs";
    for(int =0;i<A1.size();i++){
        if(A1[i]>='a' && A1[i]<='z')
            A1[i]-=32;
    }
    cout<<A1<<endl;

    //to lowercase
    for(int =0;i<A1.size();i++){
        if(A1[i]>='A' && A1[i]<='Z')
            A1[i]+=32;
    }
    cout<<A1<<endl;


    transform(A1.begin(), A1.end(), A1.begin(), ::toupper);
    cout<<A1<<endl;
    transform(A1.begin(), A1.end(), A1.begin(), ::tolower);
    cout<<A1<<endl;

    return 0;

}