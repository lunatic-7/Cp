#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mano()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    ll cnt = 0, temp = 0;

    for (int i = 0; i < n; i++)
    {
        if ((temp == 1) && (s[i] == '1'))
        {
            cnt++;
            v.push_back(cnt);
            cnt = 0;
        }
        else if (s[i] == '1')
        {
            temp = 1;
        }
        else if (temp == 1)
        {
            cnt++;
        }
    }

    int chk = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] % 2 != 0)
        {
            chk = 1;
            break;
        }
    }
    
    if (chk)
    {
        cout << 1 << "\n";
    }
    else
    {
        cout << 2 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mano();
    }
    
    return 0;
}