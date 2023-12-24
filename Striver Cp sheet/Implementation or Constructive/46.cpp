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
    	string ini, hsh, ans;
    	cin >> ini >> hsh;

    	sort(ini.begin(), ini.end());  // Sorting given password
    	// Now we will take subsets of hsh, sort it and then compare
    	int si = ini.size(), sh = hsh.size();

        int chk = 0;
    	for (int i = 0; i <= sh - si; ++i)
    	{
    		ans = hsh.substr(i, si);
    		sort(ans.begin(), ans.end());
    		if (ans == ini)
    		{
    			chk = 1;
    			break;
    		}
    	}

    	cout << (chk ? "YES" : "NO") << "\n";

    }
    return 0;
}