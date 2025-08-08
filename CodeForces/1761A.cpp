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

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, a, b;
    	cin >> n >> a >> b;

    	if (a + b <= n - 2 || a + b == 2*n) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}