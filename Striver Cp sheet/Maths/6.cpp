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
    	int x, y, z;
    	cin >> x >> y >> z;

    	if (x > y) swap(x, y);
    	if (x > z) swap(x, z);
    	if (y > z) swap(y, z);

    	if (y != z) cout << "NO" << "\n";
    	else
    	{
    		cout << "YES" << "\n";
    		cout << x << " " << x << " " << z << "\n";
    	}
    }
    return 0;
}