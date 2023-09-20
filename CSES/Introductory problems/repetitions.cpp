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
    string s;
    cin >> s;

    int temp = 1;
    int ans = 1;
    for (int i = 0; i < s.size() - 1; ++i)
    {
    	if (s[i] == s[i + 1])
    	{
    		temp++;
    		ans = max(temp, ans);
    	}
    	else temp = 1;
    }

    cout << ans << "\n";

    return 0;
}