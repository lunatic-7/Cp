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
    	int n, k1, k2;
    	cin >> n >> k1 >> k2;

    	int first[k1], second[k2];
    	int max1 = 0, max2 = 0;
    	for (int i = 0; i < k1; ++i)
    	{
    		cin >> first[i];
    		max1 = max(max1, first[i]);
    	}
    	for (int i = 0; i < k2; ++i)
    	{
    		cin >> second[i];
    		max2 = max(max2, second[i]);
    	}

    	cout << ((max1 > max2) ? "YES" : "NO") << "\n";
    }
    return 0;
}