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
    	int n, k;
    	cin >> n >> k;

    	string s;
    	cin >> s;
    	map<char, int> mp;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		mp[s[i]]++;
    	}

    	ll oddCt = 0;
    	for (auto x : mp)
    	{
    		if (x.S & 1) oddCt++;
    	}

        if (oddCt - k > 1) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
    return 0;
}