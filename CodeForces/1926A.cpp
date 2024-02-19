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
    	string s;
    	cin >> s;

    	ll a = count(s.begin(), s.end(), 'A');
        ll b = s.size() - a;

        if (a > b) cout << 'A' << "\n";
        else cout << 'B' << "\n";
    }
    return 0;
}