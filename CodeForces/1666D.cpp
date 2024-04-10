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
    	string s, t;
    	cin >> s >> t;

    	int chk = 0;
        int k = t.size() - 1;

    	for (int i = s.size() - 1; i >= 0; --i)
    	{
    		for (int j = k; j >= 0; --j)
    		{
    			if (j == k)
                {
                    if (t[k] == s[i])
                    {
                        chk++;
                        k--;
                        break;
                    }
                }
                else if (t[j] == s[i])
                {
                    chk = -1;
                    break;
                }
    		}
            if (chk == -1) break;
    	}

        if (chk == t.size()) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}