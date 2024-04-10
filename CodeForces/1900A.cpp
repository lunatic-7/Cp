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

    	string s;
    	cin >> s;

    	int ct = 0, maxi = 0, cntDot = 0;;
    	for (int i = 0; i < n; ++i)
    	{
            if (s[i] == '.') cntDot++;

    		if (s[i] == '#') ct = 0;
    		else ct++;
    		maxi = max(maxi, ct);
    	}

    	if (maxi > 2) cout << 2 << "\n";
    	else cout << cntDot << "\n";
    }
    return 0;
}