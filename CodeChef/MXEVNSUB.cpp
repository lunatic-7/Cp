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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	int sum = (n * (n + 1)) / 2;

    	if (sum % 2 == 0) cout << n << "\n";
    	else cout << n - 1 << "\n";
    }
    return 0;
}