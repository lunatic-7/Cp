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

    	int elem = arr[0];
    	bool chk = 0, msla = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (arr[i] < elem && chk == 0)
    		{
    			chk = 1;
    		}
    		if (chk == 1 && arr[i] > elem)
    		{
    			msla = 1;
    			break;
    		}
    		elem = arr[i];
    	}

    	cout << (msla ? "NO" : "YES") << "\n";
    }
    return 0;
}