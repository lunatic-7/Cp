#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int trap(vector<int>& height) {
        
    int maxL = 0, maxR = 0;
    int l = 0, r = height.size() - 1;
    int ans = 0;

    while (l < r)
    {
    	if (height[l] <= height[r])
    	{
    		if (maxL - height[l] > 0) ans += maxL - height[l];
    		maxL = max(maxL, height[l]);
    		l++;
    	}
    	else 
    	{
    		if (maxR - height[r] > 0) ans += maxR - height[r];
    		maxR = max(maxR, height[r]);
    		r--;
    	}
    }

    return ans;
}

int main()
{
    wasif();
    vector<int> height = {0, 2, 0, 3, 1, 0, 1, 3, 2, 1};

    cout << trap(height) << "\n";
    return 0;
}