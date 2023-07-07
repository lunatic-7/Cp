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
    int stops;
    cin >> stops;

    int a, b;  // exit, enter
    int maxi = 0, tot = 0;

    while(stops--)
    {
    	cin >> a >> b;
    	tot -= a;
    	tot += b;
    	maxi = max(maxi, tot);
    }

    cout << maxi << "\n";

    return 0;
}