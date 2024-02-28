#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int binaryExpo(int x, int y, int n)
{
	int ans = 1;
	while (y)
	{
		if (y & 1) ans = ((ans % n) * (x % n)) % n;
		x = ((x % n) * (x % n)) % n;
	    y >>= 1;
	}

	return ans;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;

        cout << binaryExpo(x, y, n) << "\n";
    }
    return 0;
}