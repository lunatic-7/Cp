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
    	int x;
    	cin >> x;
    	vector<int> arr;

    	if (x < 46)
    	{
	    	int start_num = 9;
	    	while (x)
	    	{
	    		if (x - start_num >= 0)
	    		{
	    			arr.PB(start_num);
	    			x -= start_num;
	    			start_num--;
	    		}
	    		else
	    		{
	    			start_num--;
	    		}
	    	}    		
    	}
    	else cout << -1;

    	reverse(arr.begin(), arr.end());

    	for (auto x: arr)
    	{
    		cout << x;
    	}
    	cout << "\n";
    }
    return 0;
}