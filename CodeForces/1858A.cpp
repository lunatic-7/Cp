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

    	if (c & 1)
    	{
    		if (a < b) cout << "Second" << "\n";
    		else cout << "First" << "\n";
    	}
    	else
    	{
    		if (a <= b) cout << "Second" << "\n";
    		else cout << "First" << "\n";
    	}
    }
    return 0;
}