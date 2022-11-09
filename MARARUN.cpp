#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void marathon()
{
    int D, d, A, B, C;
    cin >> D >> d >> A >> B >> C;

    if ((D * d) < 10)
    {
        cout << 0 << "\n";
    }
    else if ((D * d) >= 10 && (D * d) < 21)
    {
        cout << A << "\n";
    }
    else if ((D * d) >= 21 && (D * d) < 42) 
    {
        cout << B << "\n";
    }
    else
    {
        cout << C << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        marathon();
    }
    
    return 0;
}