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
    	string s;
    	cin >> s;
    	ll sum1 = 0, sum2 = 0;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (i < 3) sum1 += s[i] - '0';
    		else sum2 += s[i] - '0';
    	}

    	cout << (sum1 == sum2 ? "YES" : "NO") << "\n";
    }
    return 0;
}