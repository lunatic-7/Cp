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
    int t;
    cin >> t;

    while (t--)
    {
    	string s, s1, s2;
    	cin >> s;
    	s1 = s.substr(0, s.size() / 2);
    	s2 = s.substr(s.size() / 2);

    	cout << (s1 == s2 ? "YES" : "NO") << "\n";
    }
    return 0;
}