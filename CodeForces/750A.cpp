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
    int n, k;
    cin >> n >> k;

    int remain_time = 240 - k;

    int time = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
    	time += 5 * i;
    	ans = i;
    	if (time > remain_time)
    	{
    		ans = i - 1;
    		break;
    	}
    }

    cout << ans << "\n";
    return 0;
}