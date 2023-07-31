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
    int n, m;
    cin >> n >> m;
    vector<int> tv(n);
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin >> tv[i];
    }

    sort(tv.begin(), tv.end());

    for (int i = 0; i < m; ++i)
    {
    	if (tv[i] < 0) sum += tv[i];
    }
    cout << abs(sum) << "\n";

    return 0;
}