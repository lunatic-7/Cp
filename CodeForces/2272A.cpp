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
    	int n, k;
    	cin >> n >> k;

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	pair<int, int> larg = {-1, -1}, small = {n + 1, -1};
    	
    	int till = n - k;
    	for (int i = 0; i <= till; ++i)
    	{
    		if (larg.F < arr[i]) larg = {arr[i], i};
    	}

    	for (int i = till + 1; i < n; ++i)
    	{
    		if (small.F > arr[i]) small = {arr[i], i};
    	}

    	if (small.F > larg.F) cout << -1 << "\n";
    	else cout << larg.S + 1 << " " << small.S + 1 << "\n";
    }

    return 0;
}