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
    	int a, b, c;
    	cin >> a >> b >> c;

    	int t1 = a - 1;
    	int t2 = abs(b - c) + abs(c - 1);


    	if (t1 < t2) cout << 1 << "\n";
    	else if (t2 < t1) cout << 2 << "\n";
    	else cout << 3 << "\n";
    }
    return 0;
}