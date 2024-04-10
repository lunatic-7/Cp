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

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int chk = 0, pt = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] > 0 && chk == 0)
    		{
    			pt++;
    			chk = 1;
    		}
    		else if (arr[i] == 0) chk = 0;

    		if (pt == 2) break;
    	}

    	cout << pt << "\n";
    }
    return 0;
}