#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void shoe()
{
    int A, B, C;
    cin >> A >> B >> C;

    if ((A == 0 && B == 1) || (A == 1 && B == 0))
    {
        cout << 1 << "\n";
    }
    else if ((A == 0 && C == 1) || (A == 1 && C == 0))
    {
        cout << 1 << "\n";
    }
    else if ((B == 0 && C == 1) || (B == 1 && C == 0))
    {
        cout << 1 << "\n";
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
        shoe();
    }
    
    return 0;
}