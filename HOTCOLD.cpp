#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void temp()
{
    int c;
    cin >> c;

    if (c > 20)
    {
        cout << "HOT" << "\n";
    }
    else
    {
        cout << "COLD" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        temp();
    }
    
    return 0;
}