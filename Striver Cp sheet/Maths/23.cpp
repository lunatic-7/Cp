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

    int arr[n], ans[k + 1] = {0};

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    	ans[arr[i]]++;
    }

    int sets;
    if (n & 1) sets = (n / 2) + 1;
    else sets = n / 2;

    for (int i = 1; i <= k; ++i)
    {
    	sets -= (ans[i] / 2);
    	if (ans[i] & 1) ans[i] = 1;
    	else ans[i] = 0;
    }
    
    int sum = 0;
    for (int i = 1; i <= k; ++i)
    {
    	sum += ans[i];
    }

    cout << n - (sum - sets) << "\n";

    return 0;
}