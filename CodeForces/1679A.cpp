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
        
        ll mini = 0, maxi = 0, chk = 0;
    	
    	if ((n & 1) || n < 4) chk = 1;
		mini = n / 6;
		if (n % 6 != 0) mini++;
		maxi = n / 4;

		if (chk) cout << -1 << "\n";
		else cout << mini << " " << maxi << "\n";

    }
    return 0;
}