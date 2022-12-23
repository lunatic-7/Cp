// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mval()
{
    ll b, c;
    cin >> b >> c;

    int a = 1;
    while (1)
    {
        if ((a * b) % c == 0)
        {
            break;
        }
        else
        {
            a++;
        }
    }
    
    cout << a << "\n";
}

int main()
{
    wasif();
    ll T;
    cin >> T;

    while (T--)
    {
        mval();
    }
    
    return 0;
}