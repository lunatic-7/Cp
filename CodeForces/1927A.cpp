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

    	string s;
    	cin >> s;

    	int k = 0, j = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (s[i] == 'B')
    		{
    			k = i;
    			break;
    		}
    	}

    	for (int i = n - 1; i >= 0; --i)
    	{
    		if (s[i] == 'B')
    		{
    			j = i;
    			break;
    		}
    	}

    	cout << (j - k) + 1 << "\n"; 
    }
    return 0;
}