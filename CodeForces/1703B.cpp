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
    	unordered_map<char, int> ci;
    	int n;
    	cin >> n;

        char temp;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> temp;
    		ci[temp]++;
    	}

        ll ans = 0;
    	for (auto x : ci)
    	{
            ans += x.S + 1;
    	}

    	cout << ans << "\n";
    }
    return 0;
}