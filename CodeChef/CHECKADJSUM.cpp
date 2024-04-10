#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, q;
    	cin >> n >> q;
    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        map<int, int> poss;
        map<int, pair<int, int>> ind;

        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                ind[arr[i] + arr[j]] = {i, j};
                poss[arr[i] + arr[j]] = 1;
            }
        }

        int tot = accumulate(arr.begin(), arr.end(), 0);

        while (q--)
        {
            int x;
            cin >> x;

            if (poss[2*tot - x])
            {
                cout << arr[ind[2*tot - x].F] << " ";
                for (int i = 0; i < n; ++i)
                {
                    if (i == ind[2*tot - x].F || i == ind[2*tot - x].S) continue;

                    cout << arr[i] << " ";
                }
                cout << arr[ind[2*tot - x].S] << "\n";
            }
            else cout << -1 << "\n";
        }

        
    }

    return 0;
}