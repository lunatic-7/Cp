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

    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> v[i];
    }

    int coins = 0;
    int mere = 0;
    int tot = accumulate(v.begin(), v.end(), 0);

    sort(v.begin(), v.end(), greater<int>());

    for (int i = 0; i < n; ++i)
    {
    	if (mere > tot) break;
    	else 
    	{
            mere += v[i];
            tot -= v[i];
            coins++;
    	}
    }

    cout << coins << "\n";
    return 0;
}