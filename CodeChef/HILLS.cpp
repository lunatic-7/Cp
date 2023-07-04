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
    	int n, u, d;
    	cin >> n >> u >> d;
    	int para = 1;
    	vector<int> arr(n);

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}
        
        int ind = 1;
        for (int i = 0; i < n - 1; ++i)
        {
        	int up = arr[i + 1] - arr[i];
        	int down = arr[i] - arr[i + 1];

        	if (up >= 0 && up <= u) ind++;
        	else if (down >= 0 && down <= d) ind++;
        	else if (down >= 0 && para)
        	{
        		ind++;
        		para--;
        	}
        	else break;
        }

        cout << ind << "\n";
    }
    return 0;
}