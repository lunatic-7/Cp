#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool chkSub(string x, string s)
{
	int temp = 0;
	while (x.size() - temp >= s.size())
	{
		if (x.substr(temp, s.size()) == s) return true;
		temp++;
	}

	return false;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m;
    	cin >> n >> m;
    	string x, s;
    	cin >> x >> s;

        int cnt = 0;
    	while (s.size() > x.size())
    	{
            x += x;
            cnt++;
    	}

    	if (chkSub(x, s)) cout << cnt << "\n";
    	else
    	{
    		x += x;
    		cnt++;
    		if (chkSub(x, s)) cout << cnt << "\n";
    		else cout << -1 << "\n";
    	}
    }
    return 0;
}