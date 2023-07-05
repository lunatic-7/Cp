// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// Recursive Approach
// void solve(ll arr[], int n, vector<ll> &ans, int w, int m)
// {
//     if ((w == n - 1) && (m == n - 1))
//     {
//         ans.push_back(arr[n - 1]);
//         return;
//     }

//     ll sum = 0;

//     for (int i = w; i <= m; i++)
//     {
//         sum += arr[i];
//     }
//     ans.push_back(sum);

//     if (m < n - 1)
//     {
//         m++;
//         solve(arr, n, ans, w, m);
//     }
//     else if (w < n - 1)
//     {
//         w++;
//         m = w;
//         solve(arr, n, ans, w, m);
//     }
// }

void smjh()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> ans;
    int w = 0, m = 0;
    ll fans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // solve(arr, n, ans, w, m);

    // Iterative Approach
    ll sum = 0;
    while ((w != n - 1) || (m != n - 1))
    {
        for (int i = w; i <= m; i++)
        {
            sum += arr[i];
        }
        ans.push_back(sum);
        sum = 0;
        if (m < n - 1)
        {
            m++;
        }
        else if (w < n - 1)
        {
            w++;
            m = w;
        }
    }
    ans.push_back(arr[n - 1]);    

    for (int i = 0; i < ans.size(); i++)
    {
        fans = (fans + pow(ans[i], 3));
        fans = fans % 998244353;
    }

    cout << fans % 998244353 << "\n";
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        smjh();
    }
    
    return 0;
}