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

    	int l[n], c[n];
    	multimap<pair<int, int>, int> m;

        for (int i = 0; i < n; ++i)
        {
            cin >> l[i];
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        for (int i = 0; i < n; ++i)
        {
            m.insert({{l[i], c[i]}, i});
        }

        cout << m.rbegin()->S + 1 << "\n";
    }
    return 0;
}