#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void strand()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string k;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            k.push_back('T');
        }
        else if (s[i] == 'T')
        {
            k.push_back('A');
        }
        else if (s[i] == 'C')
        {
            k.push_back('G');
        }
        else if (s[i] == 'G')
        {
            k.push_back('C');
        }
    }

    cout << k << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        strand();
    }
    
    return 0;
}