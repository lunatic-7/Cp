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
    int T;
    cin >> T;

    while (T--)
    {
    	int n, m, k;
    	cin >> n >> m >> k;
    	vector<int> a(m), b(k);
    	vector<int> sans(n, 1);

    	for (int i = 0; i < m; ++i)
    	{
    		cin >> a[i];
    		if (sans[a[i] - 1])
    		{
    			sans[a[i] - 1] = 0;
    		}
    	}

    	for (int i = 0; i < k; ++i)
    	{
    		cin >> b[i];
    		if (sans[b[i] - 1])
    		{
    			sans[b[i] - 1] = 0;
    		}
    	}


        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int cnt = 0;
        for (int i = 0; i < a.size(); ++i)
        {
        	for (int j = 0; j < b.size(); ++j)
        	{
        		if (a[i] == b[j])
        		{
        			cnt++;
        			break;
        		}
        	}
        }

        cout << cnt << " " << count(sans.begin(), sans.end(), 1) << "\n";

    }
    return 0;
}