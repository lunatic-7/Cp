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
    	char c;
    	cin >> c;

    	string s, ns = "";
    	cin >> s;
    	ns = s + s;

    	int m = -1, ans = 0;
    	for (int i = 0; i < ns.size(); ++i)
    	{
    		if (ns[i] == c && m == -1) m = i;
    		if (ns[i] == 'g' && m != -1) 
    		{
    			ans = max(ans, i - m);
    			m = -1;
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}