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
    int T;
    cin >> T;


    while (T--)
    {
    	map<char, int> m;
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	int chk = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		m[s[i]]++;
    	}

    	for (auto &v : m)
    	{
    		if (v.S > 1) chk = 1;
    	}

    	if (chk) cout << s.size() - 2 << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}