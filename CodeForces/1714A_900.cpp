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
        int n, Hr, Mn;
        cin >> n >> Hr >> Mn;

        int sota = (Hr * 60) + Mn;

        vector<int> hm;
        for (int i = 0; i < n; ++i)
        {
            int h, m;
            cin >> h >> m;
            int mins = (h * 60) + m; 
            hm.PB(mins);
        }

        int ans = INT_MAX, k = 0;
        for (auto x : hm)
        {
            if (x - sota >= 0)
            {
                ans = min(ans, x - sota);
            }
            else
            {
                k = x + (1440 - sota);
                ans = min(ans, k);
            }
        }

        cout << ans / 60 << " " << ans % 60 << "\n";
    }

    return 0;
}