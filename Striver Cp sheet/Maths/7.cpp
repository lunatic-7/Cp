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
    	int n, m;
    	cin >> n >> m;

        int hans = n * m;
    	if (hans & 1) cout << (hans / 2) + 1 << "\n";
    	else cout << hans / 2 << "\n";
    }
    return 0;
}