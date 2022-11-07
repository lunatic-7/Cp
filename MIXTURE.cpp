#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mix()
{
    int a, b;
    cin >> a >> b;

    if (a == 0)
    {
        cout << "Liquid" << "\n";
    }
    else if (b == 0)
    {
        cout << "Solid" << "\n";
    }
    else
    {
        cout << "Solution" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mix();
    }
    
    return 0;
}