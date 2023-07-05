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
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }

    int ref = v[k - 1];

    for (int i = 0; i < n; ++i)
    {
    	if (v[i] > 0 && v[i] >= ref) cnt++;
    }

    cout << cnt << '\n';
    return 0;
}