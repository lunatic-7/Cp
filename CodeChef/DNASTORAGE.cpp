#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void store()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string enc;

    for (int i = 0; i < n - 1; i+=2)
    {
        if (s[i] == '0' && s[i + 1] == '0')
        {
            enc.push_back('A');
        }
        else if (s[i] == '0' && s[i + 1] == '1')
        {
            enc.push_back('T');
        }
        else if (s[i] == '1' && s[i + 1] == '0')
        {
            enc.push_back('C');
        }
        else if (s[i] == '1' && s[i + 1] == '1')
        {
            enc.push_back('G');
        }
    }

    cout << enc << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        store();
    }
    
    return 0;
}