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
    	string x;
    	cin >> x;

    	int xsz = x.size();
    	int dig = x[0] - '0';
    	int hlfa = 10 * (dig - 1);

    	for (int i = 1; i <= xsz; ++i)
    	{
    		hlfa += i;
    	}

    	cout << hlfa << "\n";
    }
    return 0;
}