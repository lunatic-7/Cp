#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	ll arr[n];
        
        set<int> st;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        int ans = -1;
    	for (int i = 2; i <= 100; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                st.insert(arr[j] % i);
            }
            if (st.size() == 2)
            {
                ans = i;
                break;
            }
            else st.clear();
        }

        cout << ans << "\n";
    }
    return 0;
}