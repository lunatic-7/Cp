#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    ll n, cnt = 0;
    cin >> n;

    while (n > 0)
    {
      	if ((n % 10 == 7) || (n % 10 == 4)) cnt++;
      	n = n / 10; 
    }

    if (cnt == 4 || cnt == 7) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}