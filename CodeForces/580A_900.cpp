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

    int chk = 1;
    int maxi = chk;

    for (int i = 0; i < n - 1; ++i)
    {
    	if (v[i + 1] >= v[i])
    	{
            chk++;
            maxi = max(maxi, chk);
    	}
    	else chk = 1;
    }

    cout << maxi << '\n';
    return 0;
}