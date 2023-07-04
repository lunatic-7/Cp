#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void tax()
{
    int s;
    cin >> s;

    if (s > 100)
    {
        cout << s - 10 << "\n";
    }
    else
    {
        cout << s << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        tax();
    }
    
    return 0;
}