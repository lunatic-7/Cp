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

    	// Take array input
    	int arr[n];
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	bool chk;
    	// Initialte chk if even = 0 if odd 1;
    	if (arr[0] % 2 != 0) chk = 1;
    	else chk = 0;

    	bool ans = 1;

    	for (int i = 1; i < n; ++i)
    	{
    		if (arr[i] % 2 != 0 && chk == 1)
    		{
    			ans = 0;
    			break;
    		}
    		else if (arr[i] % 2 == 0 && chk == 0)
    		{
    			ans = 0;
    			break;
    		}
            else chk = !chk;
    	}

    	cout << (ans ? "YES" : "NO") << "\n";
    }

    return 0;
}