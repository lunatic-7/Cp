#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void rain()
{
    int x;
    cin >> x;

    if (x < 3)
    {
        cout << "LIGHT" << "\n";
    }
    else if (x >= 3 && x < 7)
    {
        cout << "MODERATE" << "\n";
    }
    else
    {
        cout << "HEAVY" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        rain();
    }
    
    return 0;
}