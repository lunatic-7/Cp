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

    	int arr[n + 1];

    	for (int i = 1; i <= n; ++i)
    	{
    		if (i == 1) arr[i] = 2;
    		if (i == n) arr[i] = 1;
    		else arr[i] = i + 1;
    	}

    	for (int i = 1; i <= n; ++i)
    	{
    		cout << arr[i] << " ";
    	}
    	cout << "\n";
    }
    return 0;
}