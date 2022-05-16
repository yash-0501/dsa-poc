// You are given an integer array height of length n. There are n 
// vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, 
// such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

#include <bits/stdc++.h>
using namespace std;

int maxWater(vector<int>& heights){
    int i=0,j=heights.size()-1;
    int water=INT_MIN;
    while (i<j)
    {
        if(heights[i]<heights[j]){
            water=max(water,heights[i]*(j-1));
            i++;
        }else if(heights[i]>heights[j]){
            water=max(water,heights[j]*(j-1));
            j--;
        }else{
            water=max(water,heights[i]*(j-1));
            j--;
            i++;
        }
    }
    
}

int main()
{
    return 0;
}