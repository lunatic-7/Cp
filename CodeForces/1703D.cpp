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
    	vector<string> vect(n);
    	set<string> st;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> vect[i];
    		st.insert(vect[i]);
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		bool chk = false;
    		for (int j = 1; j < vect[i].size(); ++j)
    		{
    			string s1, s2;
    			s1 = vect[i].substr(0, j);
    			s2 = vect[i].substr(j, vect[i].size() - 1);

    			if (st.count(s1) && st.count(s2))
    			{
    				chk = true;
    				break;
    			}
    		}
    		cout << (chk ? 1 : 0);
    	}
    	cout << "\n";
    }

    return 0;
}