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

    	int ones = 0, zeros = 0;
    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == '1') ones++;
    		else zeros++;
    	}

    	int cost = 0;
    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == '1' && zeros) zeros--;
    		else if (s[i] == '0' && ones) ones--;
    		else 
    		{
    			cost = s.size() - i;
    			break;
    		} 
    	}

    	cout << cost << "\n";
    }
    return 0;
}