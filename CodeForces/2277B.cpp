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


// UPSOLVED: WRONGLY UNDERSTOOD THE STATEMENT
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
    	int mini = INT_MAX;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		mini = min(mini, arr[i]);
    	}

    	if (mini < n) cout << n << "\n";
    	else cout << 0 << "\n";
    }

    return 0;
}