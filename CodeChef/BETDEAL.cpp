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
    	double a, b;
    	cin >> a >> b;

    	if ((100 - (100 * a) / 100) < (200 - (200 * b) / 100)) cout << "FIRST" << "\n";
    	else if ((100 - (100 * a) / 100) > (200 - (200 * b) / 100))  cout << "SECOND" << "\n";
    	else cout << "BOTH" << "\n";
    }
    return 0;
}