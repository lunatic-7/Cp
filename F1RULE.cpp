#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void f1()
{
    double X, Y;
    cin >> X >> Y;

    if (Y <= (X * 107)/100)
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
        f1();
    }
    
    return 0;
}