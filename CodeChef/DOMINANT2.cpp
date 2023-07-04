#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void freq()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int> m;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }

    vector<int> brr;
    for (auto x : m)
    {
        brr.push_back(x.second);
    }

    sort(brr.begin(), brr.end());
    
    if (brr.size() == 1)
    {
        cout << "YES" << "\n";
    }
    else if (brr[brr.size() - 1] == brr[brr.size() - 2])
    {
        cout << "NO" << "\n";
    }
    else
    {
        cout << "YES" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        freq();
    }
    
    return 0;
}