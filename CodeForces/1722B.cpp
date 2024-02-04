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

    	string s1, s2;
    	cin >> s1 >> s2;

        int chk = 1;
    	for (int i = 0; i < n; ++i)
    	{
    		if (s1[i] == 'R' && s2[i] != 'R' || s2[i] == 'R' && s1[i] != 'R')
    		{
    			chk = 0;
    			break;
    		}
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}