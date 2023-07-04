#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void nsh()
{
    int X;
    float Y, Z;
    cin >> X >> Y >> Z;

    cout << X * ceil(Y/Z) << "\n";
}

int main()
{
    wasif();
    int T; 
    cin >> T;

    while (T--)
    {
        nsh();
    }
    
    return 0;
}