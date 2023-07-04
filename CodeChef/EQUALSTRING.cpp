#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void stri()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    set<ll> s;
    int count = 0;

    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] != a[i] && s.count(b[i]) == 0)
        {
            count++;
            s.insert(b[i]);
        }
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        stri();
    }
     
    return 0;
}