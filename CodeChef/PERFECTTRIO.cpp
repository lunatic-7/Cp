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
    	vector<int> v;
    	for (int i = 0; i < 3; ++i)
    	{
    		int x;
    		cin >> x;
    		v.PB(x); 
    	}

    	sort(v.begin(), v.end());
    	if (v[2] == v[1] + v[0]) cout << "YES\n";
    	else cout << "NO\n";
    }
    return 0;
}