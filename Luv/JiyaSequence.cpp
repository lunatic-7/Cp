#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void jiya()
{
    ll n;
    cin >> n;
    ll temp, tot = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        tot *= temp;
    }

    if (tot % 10 == 2 || tot % 10 == 3 || tot % 10 == 5)
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
        jiya();
    }
    
    return 0;
}