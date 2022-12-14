#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dinner()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll brr[n];
    set<ll> s;
    map<ll, ll> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    if (s.size() >= k)
    {
        for (int i = 0; i < n; i++)
        {
            if (m.count(arr[i]))
            {
                if (m[arr[i]] > brr[i])
                {
                    m[arr[i]] = brr[i];
                }
            }
            else
            {
                m[arr[i]] = brr[i];
            }
        }

        ll mrr[s.size()];
        ll i = 0, sum = 0;
        for (auto x : m)
        {
            mrr[i] = x.second;
            i++;
        }

        sort(mrr, mrr + s.size());
        for (int i = 0; i < k; i++)
        {
            sum += mrr[i];
        }
        
        cout << sum << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dinner();
    }
    
    return 0;
}