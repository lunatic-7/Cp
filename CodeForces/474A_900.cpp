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
    char pos;
    cin >> pos;
    string in, ans;
    cin >> in;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < in.size(); ++i)
    {
    	for (int j = 0; j < key.size(); ++j)
    	{
    		if (pos == 'L')
    		{
    			if (in[i] == key[j])
    			{
    				ans.PB(key[j + 1]);
    			}
    		}
    		else if (pos == 'R')
    		{
    			if (in[i] == key[j])
    			{
    				ans.PB(key[j - 1]);
    			}
    		}
    	}
    }

    cout << ans << "\n";
    return 0;
}