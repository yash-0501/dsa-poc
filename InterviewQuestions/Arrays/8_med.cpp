//Buy or sell stock to maximize profit

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit=0, min_price=prices[0];
    
    for(int i=1;i<prices.size();i++){
        if(prices[i]<min_price){
            min_price=prices[i];
        }else{
            if(profit<prices[i]-min_price){
                profit=prices[i]-min_price;
            }
        }
    }
    return profit;
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    maxProfit(arr);
    return 0;
}