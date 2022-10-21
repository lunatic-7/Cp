#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bin()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    string s;

    cin >> s;

    int chk = 0;
    for (int i = 0; i < N - 1; i++)
    {
        if ((s[i] == '0' && s[i + 1] == '1') || (s[i] == '1' && s[i + 1] == '0'))
        {
            chk = 1;
            break;
        }
    }
    
    if (chk)
    {
        if (X <= Y)
        {
            cout << X << "\n";
        }
        else if (Y <= X)
        {
            cout << Y << "\n";
        }
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bin();
    }
    
    return 0;
}