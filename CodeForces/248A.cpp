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

    int l[n], r[n];
    int cl0 = 0, cr0 = 0;

    for (int i = 0; i < n; ++i)
    {
    	cin >> l[i];
    	if (l[i] == 0) cl0++;

    	cin >> r[i];
    	if (r[i] == 0) cr0++;
    }

    cout << min(n - cl0, cl0) + min(n - cr0, cr0) << "\n";


    return 0;
}