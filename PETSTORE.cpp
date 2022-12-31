#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void aewai()
{
    ll n;
    cin >> n;
    int arr[n];
    map<int,int> m;
    int chk = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m[arr[i]]++;
    }
    
    for (auto x : m)
    {
        if (x.second % 2 != 0)
        {
            chk = 0;
            break;
        }
    }
    
    if (chk)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        aewai();
    }
    
    return 0;
}