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
    	int ans = 0;
    	int point = -1;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == '1' && point == -1) point = i;
    		else if (point != -1 && s[i] == '1')
    		{
    			ans += ((i - 1) - point);
    			point = i;
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}