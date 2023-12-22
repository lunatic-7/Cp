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
    int n, m;
    cin >> n >> m;

    int chk = 0;
    int lo = m, hi = 2 * m;
    if (n >= m)
    {
        while (1)
        {
            if (lo > n) break;
            if (n >= lo && n <= hi)
            {
                chk = 1;
                break;
            }

            else
            {
                lo += m;
                hi = lo * 2;
            }
        }

    }

    if (chk) cout << lo << '\n';
    else cout << -1 << "\n";
    	
    return 0;
}