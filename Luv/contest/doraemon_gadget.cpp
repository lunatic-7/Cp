#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void doraemon()
{
    int n, m;
    cin >> n;
    vector <ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    cin >> m;
    vector<ll> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    vector<ll> x;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                x.PB(a[j]);
            }
        }
    }

    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        doraemon();
    }
    
    return 0;
}