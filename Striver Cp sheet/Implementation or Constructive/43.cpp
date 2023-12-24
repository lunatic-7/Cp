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
    int n;
    cin >> n;
    string s;
    cin >> s;

    while (n > 0 && n % 7 != 0)
    {
    	n -= 4;
    	s.PB('4');
    }

    while (n > 0 && n % 7 == 0)
    {
    	n -= 7;
    	s.PB('7');
    }

    if (n == 0) cout << s << "\n";
    else cout << -1 << "\n";
    return 0;
}