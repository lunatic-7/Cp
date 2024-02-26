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
    	ll n;
    	cin >> n;

    	vector<ll> num(n);
    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> num[i];
        }

        ll pos1 = 0, pos2 = 0;
        ll chk = 0;
        for (ll i = 0; i < n - 1; ++i)
        {
        	if (abs(num[i] - num[i + 1]) >= 2)
        	{
        		pos1 = i + 1;
        		pos2 = i + 2;
        		chk = 1;
        		break;
        	}
        }

        if (chk)
        {
        	cout << "YES" << "\n";
        	cout << pos1 << " " << pos2 << "\n";
        }
        else cout << "NO" << "\n";
    }
    return 0;
}