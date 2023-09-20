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
    vector<int> odd, even;

    if (n == 1) cout << 1 << "\n";
    else if (n < 4) cout << "NO SOLUTION" << '\n';
    else 
    {
		for (int i = 1; i <= n; ++i)
	    {
	    	if (i & 1) odd.PB(i);
	    	else even.PB(i);
	    }

	    reverse(odd.begin(), odd.end());
	    reverse(even.begin(), even.end());

	    for (int i = 0; i < odd.size(); ++i)
	    {
	    	cout << odd[i] << " ";
	    }
	    for (int i = 0; i < even.size(); ++i)
	    {
	    	cout << even[i] << " ";
	    }
    }

    return 0;
}