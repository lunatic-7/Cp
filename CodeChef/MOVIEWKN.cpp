#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void film()
{
    int n;
    cin >> n;
    int lrr[n], rrr[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> lrr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> rrr[i];
    }

    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, lrr[i] * rrr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((lrr[i] * rrr[i]) == maxi)
        {
            m[i + 1] = rrr[i];
        }
    }
  
    int maxi2 = 0;
    for (auto x : m)
    {
        maxi2 = max(maxi2, x.second);
    }
        
    vector<int> k;
    for (auto x : m)
    {
        if (x.second == maxi2)
        {
            k.push_back(x.first);
        }
    }
        
    sort(k.begin(), k.end());
    cout << k[0] << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        film();
    }
    
    return 0;
}