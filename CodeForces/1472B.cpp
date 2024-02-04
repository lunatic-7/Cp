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
    	int temp, two_ct = 0, one_ct = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> temp;
    		if (temp == 2) two_ct++;
    	}

    	one_ct = n - two_ct;
    	int chk = 0;
    	if (two_ct % 2 == 0 && one_ct % 2 == 0) chk = 1;
    	else if (two_ct % 2 != 0 && one_ct > 0 && one_ct % 2 == 0) chk = 1;
    	else chk = 0;

    	cout << (chk ? "YES" : "NO") << '\n';
    }

    return 0;
}