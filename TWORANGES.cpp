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
	    unordered_set<int> us;
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;

	    for (int i = a; i <= b; ++i)
	    {
	    	us.insert(i);
	    }

	    for (int i = c; i <= d; ++i)
	    {
	    	us.insert(i);
	    }

	    cout << us.size() << "\n";
    }

    return 0;
}