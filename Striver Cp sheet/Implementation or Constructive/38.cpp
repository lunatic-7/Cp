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
    int n, t;
    cin >> n >> t;

    int arr[n + 1];
    for (int i = 1; i <= n; ++i)
    {
    	cin >> arr[i];
    }

    int curr = 1, chk = 0;
    while (curr <= t)
    {
    	if (curr == t)
    	{
    		chk = 1;
    		break;
    	}

    	curr = curr + arr[curr];
    }

    cout << (chk ? "YES" : "NO") << "\n";
    return 0;
}