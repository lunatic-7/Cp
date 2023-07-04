#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ll ans = 1;
        int n, k;
        cin >> n >> k;
        
        for (int i = 1; i < k; i++)
        {
           ans = ans * (n - k + i) / i;
        }

        cout << ans << "\n";
    }
    
    return 0;
}