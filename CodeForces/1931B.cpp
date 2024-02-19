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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	int arr[n], sum = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		sum += arr[i];
    	}

    	ll eq = sum / n;
    	ll paani = 0;
    	ll chk = 1;

    	for (int i = 0; i < n; ++i)
    	{
    		paani += arr[i] - eq;
    		if (paani < 0)
    		{
    			chk = 0;
    			break;
    		}
    	}

        cout << (chk ? "YES" : "NO") << "\n";
    }  
    return 0;
}