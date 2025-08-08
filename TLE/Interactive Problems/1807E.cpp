#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int query(ll x)
{
    cout << "? " << x << " ";
    for (int i = 1; i <= x; ++i)
    {
        cout << i << " ";
    }
    cout << endl;

    int response;
    cin >> response;
    return response;
}

void answer(ll x)
{
	cout << "! " << x << endl;
}

bool checker(ll mid, vector<ll>& pre)
{
	ll preSz = pre.size();
    ll response = query(mid);

    if (response > pre[mid]) return true;
    return false;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n), pre(n + 1);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        // Taking prefix sum
        pre[0] = 0;
        for (int i = 1; i <= n; ++i)
        {
            pre[i] = pre[i - 1] + arr[i - 1];
        }

        ll left = 1, right = n, ans;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (checker(mid, pre))
            {
                ans = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }

        answer(ans);
    }

    return 0;
}