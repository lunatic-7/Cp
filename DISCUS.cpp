#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void thr()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A >= B)
    {
        if (A >= C)
        {
            cout << A << "\n";
        }
        else
        {
            cout << C << "\n";
        }
    }
    else if (B >= A)
    {
        if (B >= C)
        {
            cout << B << "\n";
        }
        else
        {
            cout << C << "\n";
        }
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        thr();
    }
    
    return 0;
}