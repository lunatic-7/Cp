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
 	   int n, a, b;
       cin >> n >> a >> b;

       string ans;
       for (int i = 0; i < n; ++i)
       {
       		for (int j = 0; j < b; ++j)
       		{
       			if (ans.size() == n) break;
       			ans.PB('a' + j);
       		}
       }

       cout << ans << '\n';
    }
    return 0;
}