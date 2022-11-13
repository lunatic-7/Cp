#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void song()
{
    int n, x;
    cin >> n >> x;

    cout << n / (x * 3) << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        song();
    }
    
    return 0;
}