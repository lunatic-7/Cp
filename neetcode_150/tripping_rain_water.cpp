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
 

int trapPro(vector<int>& height)
{
    int n = height.size();
	int leftMax = 0, rightMax = 0, total = 0;
	int l = 0, r = n - 1;

	while (l < r)
	{
		if (height[l] <= height[r])
		{
			if (leftMax > height[l])
			{
				total += leftMax - height[l];
			}
			else leftMax = height[l];
			l++;
		}
		else
		{
			if (rightMax > height[r])
			{
				total += rightMax - height[r];
			}
			else rightMax = height[r];
			r--;
		}
	}

	return total;
}


int trap(vector<int>& height) {
    
    // Store leftMax ans righMax of each i,
    // Then ans += min(leftMax, rightMax) - arr[0]  // Quantity of water each ith can store
    int ans = 0;

    int n = height.size();
    vector<int> prefixMax(n, 0), suffixMax(n, 0);

    prefixMax[0] = height[0];
    for (int i = 1; i < n; ++i)
    {
    	prefixMax[i] = max(prefixMax[i - 1], height[i]);
    }

    suffixMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i)
    {
    	suffixMax[i] = max(suffixMax[i + 1], height[i]);
    }

    for (int i = 0; i < n; ++i)
    {
    	int leftMax = prefixMax[i], righMax = suffixMax[i];
    	if (height[i] < leftMax && height[i] < righMax)
    	{
    		ans += min(leftMax, righMax) - height[i];
    	}
    }

    return ans; 
}


int main()
{
    wasif();
    vector<int> height = {5, 4, 1, 2};
    cout << trapPro(height) << "\n";

    return 0;
}