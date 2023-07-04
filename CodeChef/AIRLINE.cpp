#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void air()
{
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    if (A + B <= D && C <= E)
    {
        cout << "YES" << "\n";
    }
    else if (B + C <= D && A <= E)
    {
        cout << "YES" << "\n";
    }
    else if (A + C <= D && B <= E)
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
        air();
    }
    
    return 0;
}