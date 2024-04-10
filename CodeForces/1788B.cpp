#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// TLE

int sumNum(int n)
{
	int ans = 0;
	while (n)
	{
		ans += n % 10;
		n /= 10;
	}

	return ans;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int st, en;
    	if (n % 2 == 0)
    	{
    		st = n / 2;
    		en = n / 2;
    	}
    	else
    	{
    		st = n / 2;
    		en = (n / 2) + 1;
    	}

    	while (1)
    	{
    		if (st != en && abs(sumNum(st) - sumNum(en)) <= 1) break;
    		st++;
    		en--;
    	}

    	cout << st << " " << en << "\n";
    }
    return 0;
}