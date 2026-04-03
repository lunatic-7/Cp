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

    	vector<int> a(n);
    	bool even = 0, odd = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> a[i];
    		if (a[i] & 1) odd = 1;
    		else even = 1;
    	}

    	if (even && odd)
    	{
    		sort(a.begin(), a.end());
    	}

    	showVect(a);
    }

    return 0;
}