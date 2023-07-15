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
    string s, ans;
    cin >> s;
    int space = 0;

    if (s.size() <= 3) ans = s;
    else
    {
    	int i = 0;
	    while (i < s.size())
	    {
	    	if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
	    	{
	    		i += 3;
	    		if (space)
	    		{
	                ans += " ";
	                space = 0;
	    		}
	    	}
	    	else
	    	{
	    		ans.PB(s[i]);
	    		i++;
	    		space = 1;
	    	}
	    }	
    }

    int k = 1;
    while (ans[ans.size() - 1] == ' ')
    {
    	if (ans[ans.size() - k] == ' ')
    	{
    		ans.erase(ans.size() - k);  // erasing given indexed element from string
    		k++;
    	}
    }

    cout << ans << "\n";
    return 0;
}