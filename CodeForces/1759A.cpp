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
    	string s, z = "";
    	cin >> s;

    	int sz = (s.size() / 3) + 2;
    	for (int i = 0; i < sz; ++i)
    	{
    		z += "Yes";
    	}

    	int chk = 0, cnt = 0, j = 0;
    	for (int i = 0; i < z.size(); ++i)
    	{
    		if (s[j] == z[i])
    		{
    			cnt++;
    			j++;
    			chk = max(chk, cnt);
    			if (chk == s.size()) break;
    		}
    		else
    		{
    			cnt = 0;
    			j = 0;
    		}
    	}

    	if (chk == s.size()) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}