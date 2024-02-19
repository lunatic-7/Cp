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
    	int n;
    	cin >> n;

    	string s, s1 = "", s2 = "";
    	cin >> s;
    	int chk = 0;

    	for (int i = 0; i < s.size() - 1; i++)
    	{
    		s1 += s[i];
    		s1 += s[i + 1];
    		for (int j = i + 2; j < s.size() - 1; j++)
    		{
    			s2 += s[j];
    			s2 += s[j + 1];

    			if (s1 == s2)
    			{
    				chk = 1;
    				break;
    			}
    			s2 = "";
    		}
    		if (chk == 1) break;
    		s1 = "";
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}