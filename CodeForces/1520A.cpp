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

    	string s, ans = "";
    	cin >> s;
        unordered_map<char, int> ans_pro;

    	for (int i = 0; i < n; ++i)
    	{
    		if (i == n - 1) ans += s[i];
    		else if (s[i] != s[i + 1]) ans += s[i];
    	}

    	for (int i = 0; i < ans.size(); ++i)
    	{
    		ans_pro[ans[i]]++;
    	}

        int chk = 1;
    	for (auto x : ans_pro)
    	{
    		if (x.S > 1)
    		{
    			chk = 0;
    			break;
    		}
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}