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

int maxArea(vector<int>& heights) {

	int maxi = 0;
	int ans = maxi;
	int i = 0, j = heights.size() - 1;
	while (i < j)
	{
		maxi = min(heights[i], heights[j]) * (j - i);
		ans = max(maxi, ans);
		if (heights[i] <= heights[j]) i++;
		else j--;
	}

	return ans;
}

int main()
{
    wasif();
    vector<int> height = {1, 7, 10, 5, 4, 7, 3, 6};

    int ans = maxArea(height);
    cout << ans << "\n";
    return 0;
}