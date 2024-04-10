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

    	int up[26] = {0}, sm[26] = {0};

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == toupper(s[i]))
    		{
    			up[(s[i] - '0') - 17]++;
    		}
    		else if (s[i] == tolower(s[i]))
    		{
    			sm[(s[i] - '0') - 49]++;
    		}
    	}

    	int ans = 0;
    	for (int i = 0; i < 26; ++i)
    	{
    		ans += min(up[i], sm[i]);
    		if (k > 0)
    		{
    		    ans += min(abs(up[i] - sm[i]) / 2, k);
                k -= min(abs(up[i] - sm[i]) / 2, k);
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}