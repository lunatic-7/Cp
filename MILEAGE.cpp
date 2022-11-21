#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mile()
{
    double n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;

    if (a/x > b/y)
    {
        cout << "PETROL" << "\n";
    }
    else if (b/y > a/x)
    {
        cout << "DIESEL" << "\n";
    }
    else
    {
        cout << "ANY" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        mile();
    }
     
    return 0;
}