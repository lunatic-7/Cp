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
 
string longestCommonPrefix(vector<string> &strs)
{
	string ans = "";

	// Shortest Word Length
	int shortlen = INT_MAX;
	for (int i = 0; i < strs.size(); ++i)
	{
		int len = strs[i].size();
		shortlen = min(len, shortlen);
	}

	// Main Logic
	for (int i = 0; i < shortlen; ++i)
	{
		char letchk;
		int chk = 0;
		for (int j = 0; j < strs.size(); ++j)
		{
			if (j == 0) letchk = strs[j][i];
			else if (strs[j][i] != letchk) chk = 1;
		}

		if (chk) break;
		ans.PB(letchk);
	}

	return ans;
}

int main()
{
    wasif();
    vector<string> strs = {"neet", "feet"};
    cout << longestCommonPrefix(strs) << "\n";

    return 0;
}