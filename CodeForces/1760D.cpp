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

    	vector<int> arr;
    	for(int i = 0; i < n; i++)
    	{	
        	int x;
        	cin >> x;
        	if(i == 0 || x != arr.back())
        	{
            	arr.push_back(x);
        	}
    	}

    	int pt = 0;
    	for (int i = 0; i < arr.size(); ++i)
    	{
    		if ((i == 0 || arr[i - 1] > arr[i]) && (i == arr.size() - 1 || arr[i] < arr[i + 1]))
    		{
      		    pt++;
    		}
    	}

    	if (pt == 1) cout << "YES" << "\n";
    	else cout << "NO" << "\n";
    }
    return 0;
}