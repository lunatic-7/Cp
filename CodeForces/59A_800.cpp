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
    int up = 0, lo = 0;

    // 5th bit upper ka unset (0) hota hai
    // 5th bit lower ka set (1) hota hai

    for (int i = 0; i < s.size(); ++i)
    {
    	if (!(s[i] & (1 << 5)))  // 0 Uppercase
    	{
        	up++;
    	}
    }

    lo = s.size() - up;

    if (up > lo)
    {
    	for (int i = 0; i < s.size(); ++i)
    	{
    		s[i] = s[i] & '_';  // lower to upper
    	}
    }
    else
    {
    	for (int i = 0; i < s.size(); ++i)
    	{
    		s[i] = s[i] | ' ';  // upper to lower
    	}
    }

    cout << s << "\n";
    return 0;
}