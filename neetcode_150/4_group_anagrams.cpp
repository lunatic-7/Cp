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

int main()
{
	wasif();
	vector<string> strs = {"bdddddddddd","bbbbbbbbbbc"};

	unordered_map<string, vector<string>> mp;

	for (auto &s : strs)
	{
	    vector<int> ms(26, 0);
		for (int i = 0; i < s.size(); ++i)
		{
			ms[s[i] - 'a']++;
		}

		string key = to_string(ms[0]);
		for (int i = 1; i < 26; ++i)
		{
			key += "," + to_string(ms[i]);
		}

		mp[key].PB(s);
	}

	vector<vector<string>> ans;

	for (auto &x : mp)
	{
		ans.PB(x.S);
	}

	// return ans;

	for (int i = 0; i < ans.size(); ++i)
	{
		for (int j = 0; j < ans[i].size(); ++j)
		{
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}