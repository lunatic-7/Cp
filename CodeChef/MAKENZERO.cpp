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

    	if (n < 3) cout << "NO" << "\n";
    	else if (n == 5) cout << "NO" << "\n";
    	else cout << "YES" << "\n";
    }
    return 0;
}