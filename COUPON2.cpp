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
    	int d, c;
    	cin >> d >> c;
    	vector<int> a(3), b(3);

    	int a_tot = 0;
    	int b_tot = 0;
    	for (int i = 0; i < 3; ++i)
    	{
    		cin >> a[i];
    		a_tot += a[i];
    	}

    	for (int i = 0; i < 3; ++i)
    	{
    		cin >> b[i];
    		b_tot += b[i];
    	}

    	int w_tot = a_tot + b_tot + (2 * d);
    	int c_tot = w_tot;
    	if (a_tot >= 150) c_tot -= d;
    	if (b_tot >= 150) c_tot -= d;
    	c_tot += c;

    	if (c_tot < w_tot) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}