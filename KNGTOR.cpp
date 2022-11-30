#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void car()
{
    int n, m;
    cin >> n >> m;

    cout << (n * 5) + (m * 7) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        car();
    }
    
    return 0;
}