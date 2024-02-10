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
    	int n;
    	cin >> n;
    	
    	int i = 2, j = 3 * n;
    	if (n & 1) cout << (n / 2) + 1 << "\n";
    	else cout << n / 2 << "\n";
    	while (i < j)
    	{
    		cout << i << " " << j << "\n";
    		i += 3;
    		j -= 3;
    	}
    }
    return 0;
}