#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, k, b, s;
    	cin >> n >> k >> b >> s;

    	bool ans = 0;
    	ll j = 0;

    	ll temp = k - 1;
    	while (s / k >= b && j < n)
    	{
    		if (s / k <= b)
    		{
    			ans = 1;
    			break;
    		}
    		j++;
    		s -= temp;
    	}

    	if (ans)
    	{
    		for (int i = 0; i < n - (j + 1); ++i)
    		{
    			cout << "0 "; 
    		}

    		for (int i = 0; i < j; ++i)
    		{
    			cout << temp << " ";
    		}

    		cout << s << "\n";
    	}
    	else cout << -1 << "\n";
    }
    return 0;
}