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

    if (!(n & 1))
    {
    	for (int i = n; i > 0; --i)
    	{
    		cout << i << ' ';
    	}
    }
    else cout << -1 << "\n";

    return 0;
}