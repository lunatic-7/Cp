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

    	int arr[n];
    	map<int, int> mp;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		mp[arr[i]]++;
    	}

        bool chk = 0;
        if (mp.size() == 1) chk = 1;
        else if (mp.size() == 2)
        {
        	for (auto x : mp)
        	{
        		if (x.S < n / 2)
        		{
        			chk = 0;
        			break;
        		}
        		else chk = 1;
        	}
        }

        cout << (chk ? "Yes" : "No") << "\n";
    }
    return 0;
}