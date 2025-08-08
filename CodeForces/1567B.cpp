#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

ll xortill(ll xorkar)
{
	ll a = xorkar % 4;
	if (a == 0) return xorkar;
	else if (a == 1) return 1;
	else if (a == 2) return xorkar + 1;
	else return 0;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll a, b;
    	cin >> a >> b;

    	ll xori = xortill(a - 1);

    	if (xori == b) cout << a << "\n";
    	else if ((xori ^ b) != a) cout << a + 1 << "\n";
    	else cout << a + 2 << "\n";
    }
    return 0;
}