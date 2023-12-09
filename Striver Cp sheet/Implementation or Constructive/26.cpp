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
    string s, ans;
    cin >> s;

    int pt = 0;
    for (int i = 0; i < n; ++i)
    {
    	if (i == 0)
    	{
    		ans.PB(s[i]);
            pt = i;
    	}
    	else
    	{
    		ans.PB(s[i + pt]);
    		pt += i;
    	}
    	if ((i + 1) + pt >= n) break;
    }

    cout << ans << "\n";
    return 0;
}