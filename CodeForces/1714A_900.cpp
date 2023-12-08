#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, H, M;
    	cin >> n >> H >> M;
    	pair<int, int> hm[n];
    	pair<int, int> ans[n];

    	int aasanH = 23 - H;
    	int aasanM = 60 - M;
    	for (int i = 0; i < n; ++i)
    	{
    		int hr, mn;
    		cin >> hr >> mn;
    		hm[i] = {hr, mn};
    	}

    	for (int i = 0; i < n; ++i)
    	{
    		ans[i] = {aasanH + hm[i].F, aasanM + hm[i].S};
    	}

    	for (auto x : ans)
    	{
    		// ans[i] = {aasanH + x.F, aasanM + x.S};
    		cout << x.F << " " << x.S << "\n";
    	}
    	cout << "\n";



    }
    return 0;
}