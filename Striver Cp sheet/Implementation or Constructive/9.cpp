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
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int maxi = arr[0];
    int maxi_in = 0;
    int mini = arr[0];
    int mini_in = 0;

    for (int i = 0; i < n; ++i)
    {
    	if (arr[i] > maxi)
    	{
    		maxi = arr[i];
    		maxi_in = i;
    	}

    	if (arr[i] <= mini)
    	{
    		mini = arr[i];
    		mini_in = i;
    	}
    }

    if (maxi_in == mini_in) cout << 0 << "\n";
    else if (maxi_in > mini_in) cout << maxi_in + ((arr.size() - 1) - mini_in) - 1 << "\n";
    else cout << maxi_in + ((arr.size() - 1) - mini_in) << "\n";
    
    return 0;
}