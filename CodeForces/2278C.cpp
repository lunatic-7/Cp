#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
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

    	bool center = 0;
    	int left = 0;
    	int right = 0;
    	int sum = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		sum += arr[i];
    		if ((i > 0 && i < n - 1) && arr[i] > 1) center = 1;
    		if (i == 0 && arr[i] > 1) left = arr[i];
    		if (i == n - 1 && arr[i] > 1) right = arr[i];
    	}

    	int ans = -1;
    	if (center) ans = sum - 1;
    	else if (right && left) ans = right + left - 1;
    	else if (right && !left) ans = right;
    	else if (left && !right) ans = left;
    	

    	cout << ans << "\n";
    }

    return 0;
}