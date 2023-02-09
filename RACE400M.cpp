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
    	int x, y, z;
    	cin >> x >> y >> z;

    	if (x < y) if (x < z) cout << "ALICE\n"; else cout << "CHARLIE\n";
    	else if (y < x) if (y < z) cout << "BOB\n"; else cout << "CHARLIE\n";
    }
    
    return 0;
}