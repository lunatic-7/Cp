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
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; ++i)
    {
    	ll temp;
    	cin >> temp;
    	arr[i] = abs(temp);
    }

    sort(arr.begin(), arr.end());

    ll i = 0, j = 1, ans = 0;
    while (j < n)
    {
    	while (i < j && (abs(arr[i] - arr[j]) > min(arr[i], arr[j]))) i++;
        
        ans += j - i;
    	j++;
    }

    cout << ans << "\n";

    return 0;
}