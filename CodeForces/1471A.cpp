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
    	ll n, x;
    	cin >> n >> x;

    	ll arr[n];
    	ll maxi = 0, mini = 0, xcnt = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] % x == 0) maxi += arr[i] / x;
    		else maxi += (arr[i] / x) + 1;

    		if (arr[i] % x)
    		{
    			xcnt += x - (arr[i] % x);
    		}
    	}

        mini = maxi - (xcnt / x);

    	cout << mini << " " << maxi << "\n";
    }
    return 0;
}