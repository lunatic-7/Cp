#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POF pop_front
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n, m;
    	cin >> n >> m;

        // Pushing in dq: 3 1 4 2
    	deque<ll> dq;
        for (int i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            dq.PB(x);
        }

        string s;
        cin >> s;

        // Pushing in sahi according to s: 3 2 4 1
        vector<ll> sahi;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == 'L')
            {
                sahi.PB(dq.front());
                dq.POF();
            }
            else
            {
                sahi.PB(dq.back());
                dq.POB();
            }
        }

        // Reversing it to get desired sequence: 1 4 2 3
        reverse(sahi.begin(), sahi.end());

        // Computing mul and it won't overflow as we are doing % m on each step,
        // And storing mul in ans: 1 4 2 0
        vector<ll> ans;
        ll mul = 1;
        for (auto x : sahi)
        {
            mul *= x;
            mul %= m;
            ans.PB(mul);
        }

        // Reversing ans to get desired answer: 0 2 4 1
        reverse(ans.begin(), ans.end());

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}