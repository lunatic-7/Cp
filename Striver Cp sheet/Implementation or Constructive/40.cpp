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

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    ll choc = arr[n - 1];
    int mini = arr[n - 1];
    for (int i = n - 1; i > 0; --i)
    {
    	mini = min(mini - 1, arr[i - 1]);
    	if (mini >= 0) choc += mini;
    }

    cout << choc << "\n";
    return 0;
}