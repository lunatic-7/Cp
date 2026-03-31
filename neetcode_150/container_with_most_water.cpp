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


int maxAreaPro(vector<int>& heights)
{
    int ans = 0;
    int i = 0, j = heights.size() - 1;
    while (i < j)
    {
        ans = max(min(heights[i], heights[j]) * (j - i), ans);
        if (heights[i] < heights[j]) i++;
        else j--;
    }

	return ans;
}


int maxArea(vector<int>& heights) {

	int ans = 0;
	for (int i = 0; i < heights.size(); ++i)
	{
		for (int j = i + 1; j < heights.size(); ++j)
		{
			ans = max(min(heights[i], heights[j]) * (j - i), ans);
		}
	}

	return ans;
}

int main()
{
    wasif();
    vector<int> height = {1, 7, 2, 5, 4, 7, 3, 6};
    cout << maxAreaPro(height) << "\n";

    return 0;
}