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
    	string s;
    	cin >> s;

    	int phla = -1, last = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (s[i] == '1' && phla == -1) 
    		{
    			phla = i;
    			last = i;
    		}
    		if (s[i] == '1' && phla != -1) last = i;
    	}

        if (phla == -1) cout << n << "\n";
        else
        {
	    	int ind1 = min(phla, (n - 1) - last);

	        int ans = (n - ind1) * 2;
	        cout << ans << "\n";        	
        }

    }
    return 0;
}