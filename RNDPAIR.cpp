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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	vector<double> arr(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	vector<double> temp = arr;

    	sort(temp.begin(), temp.end());
    	int maxi = temp[n - 1] + temp[n - 2];
    	int cnt = 0, pairs = 0;
 
    	for (int i = 0; i < n; ++i)
    	{
    		for (int j = i + 1; j < n; ++j)
    		{
    			if (temp[i] + temp[j] == maxi) cnt++;
    			pairs++;
    		}
    	}

    	cout << fixed << setprecision(8) << (double)cnt/(double)pairs << "\n";
    }
    return 0;
}