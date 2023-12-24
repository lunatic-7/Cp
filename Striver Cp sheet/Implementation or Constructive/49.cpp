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
    int p;
    cin >> p;
    int arr[p];

    int odd = 0;
    for (int i = 0; i < p; ++i)
    {
    	cin >> arr[i];
    	if (arr[i] & 1) odd++;
    }

    int cng = odd / 2;
    for (int i = 0; i < p; ++i)
    {
    	if (!(arr[i] & 1)) cout << arr[i] / 2 << "\n";
    	else
    	{
    		if (odd > cng)
    		{
    			if (arr[i] > 0) cout << (arr[i] / 2) << "\n";
    			else cout << (arr[i] / 2) - 1 << "\n";
    			odd--;
    		}
    		else 
    		{
    			if (arr[i] > 0) cout << (arr[i] / 2) + 1 << "\n";
    			else cout << (arr[i] / 2) << "\n";
    		}
    	}
    }
    return 0;
}