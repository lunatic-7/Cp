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

    	int b[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> b[i];
    	}

    	vector<int> a;
    	for (int i = 0; i < n; ++i)
    	{
    		if (i != 0 && b[i - 1] != 1) a.PB(1);
    		a.PB(b[i]);
    	}

    	cout << a.size() << "\n";
    	for (auto x : a)
    	{
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    return 0;
}