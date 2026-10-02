#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

int largestRectangleArea(vector<int>& heights) {
    
    // Get the max height
    int maxi = *max_element(heights.begin(), heights.end());
    
    // loop till maxi height from 0, considering all possible Area for each i;
    int max_area = 0;
    for (int i = 0; i <= maxi; ++i)
    {
    	int temp = 0;
    	for (int j = 0; j < heights.size(); ++j)
    	{
    		if (heights[j] >= i)
    		{
    			max_area = max(max_area, i * (j + 1 - temp));
    		}
    		else
    		{
    			temp = j + 1;
    		}
    	}
    	cout << i << " " << max_area << "\n";
    }

    return max_area;
}

int main()
{
    wasif();
    vector<int> heights = {1, 3, 7};
    cout << largestRectangleArea(heights) << "\n";

    return 0;
}