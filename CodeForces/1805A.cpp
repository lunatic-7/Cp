#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int arr[n];
    	int ans = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		ans ^= arr[i];
    	}

    	if (n & 1) cout << ans << "\n";
    	else if (ans == 0) cout << 0 << "\n";
    	else cout << -1 << "\n";
    }
    return 0;
}