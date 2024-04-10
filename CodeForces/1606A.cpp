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

    	int ab = 0, ba = 0;

    	int i = 0;
    	while (i < s.size() - 1)
    	{
    		if (s.substr(i, 2) == "ab") ab++;
    		else if (s.substr(i, 2) == "ba") ba++;
    		i++;
    	}

    	if (ba > ab)
    	{
    		for (int i = s.size() - 1; i >= 0; ++i)
    		{
    			if (s[i] == 'a') s[i] = 'b';
    			break;
    		}
    	}
    	else if (ab > ba)
    	{
    		for (int i = s.size() - 1; i >= 0; ++i)
    		{
    			if (s[i] == 'b') s[i] = 'a';
    			break;
    		}
    	}

    	cout << s << "\n";
    }
    return 0;
}