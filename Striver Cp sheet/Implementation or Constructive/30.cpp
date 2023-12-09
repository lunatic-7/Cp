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
    	int ans = 2;

    	int store;
    	cout << ans << "\n";
    	cout << n << " " << n - 1 << "\n";
    	store = ceil((float) (n + (n - 1)) / 2);


    	for (int i = 2; i < n; ++i)
    	{
    	    cout << store << " " << n - i << "\n";
    		store = ceil((float)(store + (n - i)) /  2);
    	}

    }
    return 0;
}