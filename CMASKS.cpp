#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mask()
{
    int x, y;
    cin >> x >> y;

    if (y * 10 <= x * 100)
    {
        cout << "Cloth" << "\n";
    }
    else
    {
        cout << "Disposable" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mask();
    }
    
    return 0;
}