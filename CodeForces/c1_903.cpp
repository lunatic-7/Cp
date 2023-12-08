#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// NOT SOLVED

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

    	int ct = 0;
    	while (s.size() >= x.size())
    	{
    		x += x;
    		ct++;
    	}

    	int chk = 0;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (x.substr(i, s.size()) == s) 
    		{
    			chk = 1;
    			break;
    		}
    	}

    	if (chk) cout << ct << "\n";
    	else cout << -1 << "\n";
    }


    return 0;
}