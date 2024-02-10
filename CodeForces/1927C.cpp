#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Wrong Answer

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m, k;
    	cin >> n >> m >> k;

    	int phla[n], doosra[m];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> phla[i];
    	}
    	for (int i = 0; i < m; ++i)
    	{
    		cin >> doosra[i];
    	}

    	int arr[k + 1] = {0};
    	for (int i = 0; i < n; ++i)
    	{
    		if (phla[i] >= 1 && phla[i] <= 6)
    		{
    			if (arr[phla[i]] == 0) arr[phla[i]] += 1;
    		}
    	}

    	for (int i = 0; i < m; ++i)
    	{
    		if (doosra[i] >= 1 && doosra[i] <= 6)
    		{
    			if (arr[doosra[i]] == 0 || arr[doosra[i]] == 1) arr[doosra[i]] += 2;
    		}
    	}

    	bool chk = 1;
    	for (int i = 1; i < k + 1; ++i)
    	{
    		// cout << arr[i] << " ";  
    		if (arr[i] == 0)
    		{
    			chk = 0;
    			break;
    		}
    	}
    	// cout << "\n";

        int cnt1 = 0, cnt2 = 0;
    	if (chk)
    	{
            for (int i = 1; i < k + 1; ++i)
    	    {
    		    if (arr[i] == 1) cnt1++;
    		    else if (arr[i] == 2) cnt2++;
    	    }
    	}
        
        if (chk)
        {
    	    if ((cnt1 <= k / 2) && (cnt2 <= k / 2)) chk = 1;
    	    else chk = 0;
        }

        cout << (chk ? "YES" : "NO") << "\n";

    }
    return 0;
}