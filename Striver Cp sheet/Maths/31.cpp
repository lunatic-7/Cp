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
    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;

    int forl = n;
    while (n--)
    {
    	for (int i = 0; i < 3; ++i)
	    {
	    	int temp;
	    	cin >> temp;
	    	if (i == 0) x += temp;
	    	if (i == 1) y += temp;
	    	if (i == 2) z += temp;
	    }
    }

    if (!x && !y && !z) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}	