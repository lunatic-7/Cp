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
    	vector<int> d(n), a(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> d[i];
    	}

        int chk = 1;
    	int temp1 = 0, temp2 = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (i == 0) a[i] = d[i];
    		else
    		{
                temp1 = d[i] + a[i - 1]; // +
                temp2 = a[i - 1] - d[i]; // -
                if (((temp1 > -1 && temp2 > -1) || (temp1 < 0 && temp2 < 0)) && (temp1 != temp2))
                {
                    chk = 0;
                	break;
                }
                else a[i] = max(temp1, temp2);
    		}
    	}

    	if (chk)
    	{
    		for (int i = 0; i < n; ++i)
    		{
    			cout << a[i] << " ";
    		}
    		cout << "\n";
    	}
    	else cout << -1 << "\n";
    }

    return 0;
}