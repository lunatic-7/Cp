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
    int T;
    cin >> T;
    while (T--)
    {
    	int n;
    	cin >> n;
    	vector<int> arr(n);
    	int odd_ct = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] & 1) odd_ct++;
    	}

        cout << (!(odd_ct & 1) ? "YES" : "NO") << '\n';
    }
    return 0;
}