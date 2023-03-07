// UNSOLVED

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
    	int n, k, s;
    	cin >> n >> k >> s;
    	vector<int> v;

    	for (int i = 1; i <= n + k; ++i)
    	{
    		if (i & 1) v.PB(i); 		
    	}

    	for (int i = 0; i < v.size(); ++i)
    	{
    		v[i] * k
    	}
    }
    return 0;
}