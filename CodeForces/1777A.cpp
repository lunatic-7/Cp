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

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int ans = 0;
    	for (int i = 0; i < n - 1; ++i)
    	{
    		if ((arr[i] & 1) && (arr[i + 1] & 1) || !(arr[i] & 1) && !(arr[i + 1] & 1)) ans++;
    	}

    	cout << ans << "\n";
    }
    return 0;
}