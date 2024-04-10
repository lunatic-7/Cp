#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UPSOLVED

int main()
{
    wasif();
    ll t;
    cin >> t;

    while (t--)
    {
    	ll n;
    	cin >> n;

    	string house;
    	cin >> house;

        vector<int> pre(n);  // Making prefix sum array for 1
        pre[0] = house[0] == '1';  // returns bool

        // Calculate prefix sum for 1
        for (int i = 1; i < n; ++i)
        {
            pre[i] = pre[i - 1] + (house[i] == '1');
        }

        // lambda function to check satisfaction
        auto getSum = [&] (int l, int r)
        {
            if (l == 0) return pre[r];
            return pre[r] - pre[l - 1];
        };  // Don't miss this semicolom in lambda functions

        int ans = -1;  // if no valid position, which is given impossible in this question though
        if (getSum(0, n - 1) >= (n + 1) / 2)  // (n + 1) to do ceil calcuation, (it avoids odd even numbers issue)
        {
            ans = 0;
        }
    	
        for (int i = 0; i < n; ++i)
        {
            int l1 = getSum(0, i); // left 1 cal
            int l0 = i + 1 - l1;
            int r1 = getSum(i + 1, n - 1);  // right 1 cal
            int r0 = n - i - 1 - r1;

            if (l0 >= l1 && r1 >= r0)
            {
                if (abs(n - 2 * (i + 1)) < abs(n - 2 * ans)) ans = i + 1;
            }  
        }

        cout << ans << "\n";

    }
    return 0;
}