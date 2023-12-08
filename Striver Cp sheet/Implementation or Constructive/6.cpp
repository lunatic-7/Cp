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
    	string s;
    	cin >> s;
    	vector<int> ans;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		int topush = (s[i] - '0') * (pow(10, s.size() - 1 - i));
    		if (topush > 0) ans.PB(topush);
    	}
    	
    	cout << ans.size() << "\n";
    	for (int i = 0; i < ans.size(); ++i)
    	{
    		cout << ans[i] << " ";
    	}
    	cout << "\n";
    }
    return 0;
}