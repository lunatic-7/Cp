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
    int T;
    cin >> T;
    while (T--)
    {
    	ll n;
    	cin >> n;
    	// chk power of 2
    	if (!(n & (n - 1))) cout << "NO" << "\n";
    	else cout << "YES" << "\n"; 
    }
    return 0;
}