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

    while(t--)
    {
    	int n, k;
    	cin >> n >> k;

    	string s;
    	cin >> s;
    	int ct = 0, pt = 0, chk = 0;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (ct == k)
    		{
    			chk = 0;
    			ct = 0;
    		}
    		if (s[i] == 'B')
    		{
    			chk = 1;
    		}
    		if (chk == 1)
    		{
    			ct++;
    			if (ct == 1) pt++;
    		}
    	}

    	cout << pt << "\n";
    }
    return 0;
}