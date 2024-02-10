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

    	vector<int> trace(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> trace[i];
    	}

    	vector<int> st(26, 0);
    	string ans = "";
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = 0; j < 26; ++j)
    		{
    			if (trace[i] == st[j])
    			{
                    ans += ('a' + j);
                    st[j]++;
                    break;   
    			}
    		}
    	}

    	cout << ans << "\n";
    }
    return 0;
}