#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sSort()
{
    ll n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0')
        {
            count++;
        }
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        sSort();
    }
    
    return 0;
}