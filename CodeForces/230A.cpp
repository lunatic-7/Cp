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
    int s, n;
    cin >> s >> n;
    pair<int,int> xy[n];
    int x, y;

    for (int i = 0; i < n; ++i)
    {
    	cin >> x >> y;
      	xy[i] = {x, y};
    }

    sort(xy, xy + n);

    int chk = 1;
    for (auto x : xy)
    {
    	if (x.F < s)
    	{
    		s += x.S;
    	}
    	else 
    	{
    		chk = 0;
    		break;
    	}
    }

    cout << (chk ? "YES" : "NO") << "\n";
    return 0;

}