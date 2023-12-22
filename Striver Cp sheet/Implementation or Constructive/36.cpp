#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
ll arr[2000+10];

void iterLock(int n)
{
	arr[1] = 1;
	for (int i = 2; i <= 2000; ++i)
	{
		arr[i] = i - 1 + arr[i - 1];
	}
}

int main()
{
    wasif();
    int n;
    cin >> n;

    iterLock(n);

    ll ans = 0;
    for (int i = 1; i <= n; ++i)
    {
    	ans += arr[i];
    }

    cout << ans << "\n";
    return 0;
}