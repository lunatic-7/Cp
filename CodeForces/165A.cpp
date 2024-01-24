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
    int n;
    cin >> n;

    int x[n], y[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> x[i];
    	cin >> y[i];
    }

    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
    	int xx = x[i], yy = y[i];
    	int chk[4] = {0};
    	for (int j = 0; j < n; ++j)
    	{
    		if (x[j] > xx && y[j] == yy) chk[0] = 1;  // R
    		else if (x[j] < xx && y[j] == yy) chk[1] = 1;  // L
    		else if (x[j] == xx && y[j] > yy) chk[2] = 1;  // U
    		else if (x[j] == xx && y[j] < yy) chk[3] = 1;  // D
    	}

    	int sum = 0;
    	for (int i = 0; i < 4; ++i)
    	{
    		sum += chk[i];
    	}

    	if (sum == 4) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}