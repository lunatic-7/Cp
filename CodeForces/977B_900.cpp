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
    map<string, int> tgm;
    string s;
    cin >> s;

    for (int i = 0; i < n - 1; ++i)
    {
    	string r = s.substr(i, 2);
    	tgm[r]++;
    }

    int ans = 0;
    for (auto &x : tgm)
    {
    	ans = max(ans, x.S);
    }

    string ans_s;
    for (auto &x : tgm)
    {
    	if (x.S == ans)
    	{
    		ans_s = x.F;
    		break;
    	}
    }

    cout << ans_s << "\n";

    return 0;
}