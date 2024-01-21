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
    ll n;
    cin >> n;

    if (n > 2)
    {
    	cout << "Yes" << "\n";
    	cout << n - 1 << " ";
    	for (int i = 1; i <= n - 1; ++i)
    	{
    		cout << i << " ";
    	}
    	cout << "\n";
    	cout << 1 << " ";
    	cout << n << "\n"; 
    }
    else cout << "No" << "\n";
    return 0;
}