#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
const int M = 1e9+7;

// HINT

int main()
{
    wasif();
   	ll n;
    cin >> n;

    vector<int> chk = {8, 4, 2, 6};
    if (n == 0) cout << 1 << "\n";
    else if (n % 4 == 0) cout << chk[3] << "\n";
    else cout << chk[(n % 4) - 1] << "\n"; 

    return 0;
}