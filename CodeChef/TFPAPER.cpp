#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void alice()
{
    int n, k;
    cin >> n >> k;

    cout << n - k << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        alice();
    }
    
    return 0;
}