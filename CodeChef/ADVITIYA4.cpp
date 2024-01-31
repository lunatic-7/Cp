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
    	int n, q;
    	cin >> n >> q;

    	string s;
    	cin >> s;

    	char temp;
    	for (int i = 0; i < q; ++i)
    	{
    		cin >> temp;
    		s.PB(temp);
    	}

        int maxi = 1, temp2 = 1;
    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (i >= n - 1) cout << maxi << " ";
    		if (i < s.size() - 1 && s[i] == s[i + 1])
    		{
    			temp2++;
    			maxi = max(maxi, temp2);
    		}
    		else temp2 = 1;
    	}
    	cout << "\n";
    }
    return 0;
}