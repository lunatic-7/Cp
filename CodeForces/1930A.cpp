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
    	vector<int> v(2*n);

    	for (int i = 0; i < 2*n; ++i)
    	{
    		cin >> v[i];
    	}

    	sort(v.begin(), v.end());

    	ll sum = 0;
    	for (int i = 0; i < 2*n; i+=2)
    	{
    		sum += v[i];
    	}

    	cout << sum << "\n";
    }
    return 0;
}