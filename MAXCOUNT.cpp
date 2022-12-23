#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void msm()
{
    int n;
    cin >> n;
    int arr[n];
    map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    int maxi = 0;
    for (auto x : m)
    {
        maxi = max(maxi, x.second);
    }

    vector<int> brr;

    for (auto x : m)
    {
        if (x.second == maxi)
        {
            brr.push_back(x.first);
        }
    }
    
    sort(brr.begin(), brr.end());

    cout << brr[0] << " " << maxi << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        msm();
    }
    
    return 0;
}