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
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, r, b;
    	cin >> n >> r >> b;

        ll bata = b + 1;
    	ll div = r / bata;
    	ll to_add = r % bata;

    	vector<ll> btwara(bata);
    	for (ll i = 0; i < bata; ++i)
    	{
    		btwara[i] = div;
    		if (to_add)
    		{
    			btwara[i] += 1;
    			to_add--;
    		}
    	}

        string ans = "";
    	for (int i = 0; i < bata; ++i)
    	{
    		ans += string(btwara[i], 'R'); // Mutiply a charater several times and add it to string
    		if (i != bata - 1) ans += 'B';
    	}

    	cout << ans << "\n";
    	
    }
    return 0;
}