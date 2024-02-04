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
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    ll ans = 0;
    for (int i = 0; i < s.size(); ++i)
    {
    	if (s[i] == '1') ans += a1;
    	else if (s[i] == '2') ans += a2;
    	else if (s[i] == '3') ans += a3;
    	else if (s[i] == '4') ans += a4;
    }

    cout << ans << "\n";
    
    return 0;
}