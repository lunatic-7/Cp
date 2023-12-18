#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
// TLE

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
        bool uni[n];
    	for (int i = 0; i < n - 1; ++i)
    	{
    		int v1, v2;
    		cin >> v1 >> v2;

    		uni[v1] = true;
    	}

        int leafNode = 0;
        for (int i = 2; i <= n; ++i)
        {
            if (!uni[i]) leafNode++;
        }

        cout << leafNode - 1 << "\n";
    }


    return 0;
}