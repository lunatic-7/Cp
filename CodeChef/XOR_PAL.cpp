#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void paliz()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            count++;
        }
        i++;
        j--;
    }
    
    cout << (count + 1) / 2 << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        paliz();
    }
    
    return 0;
}