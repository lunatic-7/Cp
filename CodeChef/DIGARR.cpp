#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void dig()
{
    int n;
    cin >> n;
    string s;

    cin >> s;
    int swi = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0' || s[i] == '5')
        {
            swi = 1;
            break;
        }
        else
        {
            swi = 0;
        }
    }

    if (swi)
    {
        cout << "Yes" << "\n";
    }
    else
    {
        cout << "No" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        dig();
    }
    
    return 0;
}