#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void seat()
{
    int x;
    cin >> x;

    if (x <= 50)
    {
        cout << "LEFT" << "\n";
    }
    else
    {
        cout << "RIGHT" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        seat();
    }
    
    return 0;
}