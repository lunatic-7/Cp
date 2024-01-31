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
    	int r[5];
    	int ans = 0;
    	for (int i = 0; i < 5; ++i)
    	{
    		cin >> r[i];
    		ans += r[i];
    	}

    	if (ans >= 4) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}