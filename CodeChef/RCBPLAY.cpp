#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// TOP SECRET -> RCB may qualify or not, but they can never win an IPL. LOL

void haarcb()
{
    int X, Y, Z;
    cin >> X >> Y >> Z;

    if (X + (Z * 2) >= Y)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        haarcb();
    }
    
    return 0;
}