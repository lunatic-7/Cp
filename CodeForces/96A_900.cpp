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
    string s;
    cin >> s;

    int ct = 0;

    for (int i = 0; i < s.size() - 1; ++i)
    {
    	if (ct >= 6) break;
    	else if (s[i] == s[i + 1]) ct++;
    	else ct = 0;
    }

    if (ct >= 6) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}