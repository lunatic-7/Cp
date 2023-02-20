#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool cmp(string s1, string s2)
{
	if ((count(s1.begin(), s1.end(), '1')) > (count(s2.begin(), s2.end(), '1'))) return s2 > s1;
	return s1 > s2;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	vector<string> vs;

    	for (int i = 0; i < n; ++i)
    	{
    		string s;
    		cin >> s;
    		vs.PB(s);
    	}

    	sort(vs.begin(), vs.end(), cmp);

    	for (int i = 0; i < n - 1; ++i)
    	{
    		for (int j = 0; j < 10; ++j)
    		{
    			if (vs[i][j] == '1' && vs[i + 1][j] == '1') vs[i + 1][j] = '0';
    			else if (vs[i][j] == '0' && vs[i + 1][j] == '0') vs[i + 1][j] = '0';
    			else vs[i + 1][j] = '1';
    		}
    	}
    	
    	cout << count(vs[n - 1].begin(), vs[n - 1].end(), '1') << "\n";
    }
    return 0;
}