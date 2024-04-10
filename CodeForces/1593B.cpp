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
    	ll n, temp;
    	cin >> n;
        temp = n;

        // for last digit 0
        ll move1 = 0, move2 = 0;
        bool chk = 0;
        while (n > 0)
        {
            if (n % 10 == 0 && !chk)
            {
                chk = 1;
                n /= 10;
            }
            else if (!chk)
            {
                move1++;
                n /= 10;
            }

            if (chk)
            {
                if (n % 10 == 5 || n % 10 == 0) break;
                else
                {
                    move1++;
                    n /= 10;
                }
            }
        }

        chk = 0;
        n = temp;
        while (n > 0)
        {
            if (n % 10 == 5 && !chk)
            {
                chk = 1;
                n /= 10;
            }
            else if (!chk)
            {
                move2++;
                n /= 10;
            }

            if (chk)
            {
                if (n % 10 == 2 || n % 10 == 7) break;
                else
                {
                    move2++;
                    n /= 10;
                }
            }
        }

        cout << min(move1, move2) << "\n";
    }
    return 0;
}