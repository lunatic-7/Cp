// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool chkpar(int a, int b)
{
	if (a % 2 == 0 && b % 2 == 0) return true;
	if (a % 2 == 1 && b % 2 == 1) return true;
	return false;
}

void sortp(vector<int> &par)
{
	for (int i = 0; i < par.size(); ++i)
	{
		for (int j = i + 1; j < par.size(); ++j)
		{
			if (par[i] > par[j] && chkpar(par[i], par[j])) swap(par[i], par[j]);
		}
	}
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
    	vector<int> par(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> par[i];
    	}

    	sortp(par);

    	int chk = 1;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		if (par[i] > par[i + 1])
    		{
    			chk = 0;
    			break;
    		}
    	}

    	if (chk) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}