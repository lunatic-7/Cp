// WRONG ANSWER
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void coun()
{
    ll n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
    }
    cout << "\n";
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        coun();
    }
    
    return 0;
}