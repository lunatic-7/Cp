#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int solve(int n)
{
	int num, maxi = 0, mini = INT_MAX;
	while (n > 0)
	{
		num = n % 10;
		maxi = max(maxi, num);
		mini = min(mini, num);
		n /= 10;
	}

	return maxi - mini;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int l, r;
    	cin >> l >> r;
 
        int chk = 0, ans = r;
	    for (int i = l; i <= r; ++i)
	    {
	        if (solve(i) > chk)
	        {
	        	chk = solve(i);
	        	ans = i;
	        	if (chk == 9) break;
	        }
	    }        	

    	cout << ans << "\n";
    }
    return 0;
}