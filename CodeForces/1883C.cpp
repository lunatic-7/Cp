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
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, k;
    	cin >> n >> k;

    	ll arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

        ll ans = 10;
    	if (k == 4)
    	{
    	   ll twoCT = 0;
           for (int i = 0; i < n; ++i)
           {
               if (arr[i] % k == 0)
               {
                   ans = 0;
                   break;
               }
               else if (arr[i] % 2 == 0)
               {
                   twoCT++;
                   if (twoCT == 1) ans = 1;
                   if (twoCT == 2)
                   {
                       ans = 0;
                       break;
                   }
               }
               else if (k - arr[i] % k == 1) ans = 1;
               else ans = min(ans, 2 * 1LL);
           }
    	}
    	else
    	{
            for (int i = 0; i < n; ++i)
            {
            	if (arr[i] % k == 0)
            	{
            		ans = 0;
            		break;
            	}
            	else ans = min(ans, k - arr[i] % k);
            }
    	}

    	cout << ans << "\n";
    }
    return 0;
}