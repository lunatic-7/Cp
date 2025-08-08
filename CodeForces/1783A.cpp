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

    	sort(arr.begin(), arr.end());

    	vector<int> ans;
    	int i = 0, j = n - 1;
    	while (i <= j)
    	{
    		if (i == j) ans.PB(arr[i]);
    		else
    		{
	    		ans.PB(arr[i]);
	    		ans.PB(arr[j]);    			
    		}
    		
    		i++;
    		j--;
    	}

    	bool chk = 1;
    	ll sum = 0;
    	for (int i = 0; i < ans.size() - 1; ++i)
    	{
    		sum += ans[i];
    		if (sum == ans[i + 1])
    		{
    			chk = 0;
    			break;
    		}
    	}

    	if (chk)
    	{
    		cout << "YES" << "\n";
    		showVect(ans);
    	}
    	else cout << "NO" << "\n";
    }
    return 0;
}