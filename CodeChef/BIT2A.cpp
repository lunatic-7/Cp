#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void pray()
{
    int n;
    cin >> n;
    ll arr[n];
    vector<ll> v;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                cnt++;
            }
        }
        v.push_back(cnt);
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        pray();
    }
    
    return 0;
}