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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	unordered_map<char, int> ci;

    	for (int i = 0; i < n; ++i)
    	{
    	    string s;
    		cin >> s;
    		for (int i = 0; i < s.size(); ++i)
    		{
    			if (s[i] == 'c') ci['c']++;
    			if (s[i] == 'o') ci['o']++;
    			if (s[i] == 'd') ci['d']++;
    			if (s[i] == 'h') ci['h']++;
    			if (s[i] == 'e') ci['e']++;
    			if (s[i] == 'f') ci['f']++;
    		}
    	}

        cout<< min({ci['c']/2, ci['o'], ci['d'], ci['e']/2, ci['h'], ci['f']}) << "\n";
    }
    return 0;
}