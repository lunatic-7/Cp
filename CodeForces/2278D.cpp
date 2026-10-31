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

    	// min cost is sum of each elem's distance to median.
        // min op is max val - min val
        sort(arr.begin(), arr.end());

        ll cost = 0;
        ll median = arr[n / 2];
        for (int i = 0; i < n; ++i)
        {
            cost += abs(arr[i] - median);
        }

        ll op = arr[n - 1] - arr[0];

        cout << cost << " " << op << "\n";
    }

    return 0;
}