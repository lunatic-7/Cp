#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Logic
// Take LCM of counts of s and t
// eg: if s = baba and t = ba
// size of s = 4, t = 2 So, LCM(4,2) = 4
// Now at least we know that both string should have a size of 4
// Now make them sizes of 4 and compare if they are same

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	string s, t;
    	cin >> s >> t;

    	int n1 = s.size(), n2 = t.size();
    	int lcm = (n1*n2)/ __gcd(n1, n2);
    	string r1 = "", r2 = "";
    	for (int i = 0; i < lcm / n1; ++i) r1 += s;
    	for (int i = 0; i < lcm / n2; ++i) r2 += t;

    	if (r1 == r2) cout << r1 << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}