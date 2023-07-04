#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void mushkil()
{
    int n;
    cin >> n;

    if (n >= 7)
    {
        cout << "YES" << "\n";
    }
    else if (n % 2 == 0)
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
        mushkil();
    }
    
    return 0;
}