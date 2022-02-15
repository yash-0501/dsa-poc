/*
The stock span problem is a financial problem where we have a series of n daily price 
quotes for a stock and we need to calculate span of stock’s price for all n days. 
The span Si of the stock’s price on a given day i is defined as the maximum number 
of consecutive days just before the given day, for which the price of the stock on 
the current day is less than its price on the given day. 
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, 
then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6} 

*/

#include <bits/stdc++.h>
using namespace std;

vector<int> stockspan(vector<int> prices){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(auto price: prices){
        int days  = 1;
        while(!s.empty() and s.top().first <= price){
            days += s.top().second;
            s.pop();
        }
        s.push({price,days});
        ans.push_back(days);
    }
    return ans;
}

int main()
{
    vector <int> a = {100, 80, 60, 70, 60, 75, 85};
    vector <int> res = stockspan(a);
    for(auto i:res){
        cout<<i<<" ";
    }cout<<"\n";
    return 0;
}