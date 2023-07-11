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
    set<ll> shoe;

    ll temp;
    for (int i = 0; i < 4; ++i)
    {
    	cin >> temp;
    	shoe.insert(temp);
    }

    cout << 4 - shoe.size() << "\n";
    return 0;
}