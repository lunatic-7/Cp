#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	string s, t;
    	cin >> s >> t;

    	vector<int> ans;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		int chk = (t[i] - s[i]);
    		while (chk % 3 != 0 || chk < 0) chk += 26;
    		if (chk % 3 == 0) ans.PB(chk / 3);
    	}

    	for (int i = 0; i < ans.size(); ++i)
    	{
    		cout << ans[i] << " ";
    	}
    	cout << "\n";
    }
    return 0;
}