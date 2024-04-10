#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// SEEN + THODA DIMAG

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	int arr[n], chk = 1;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
            if (arr[i] != 0) chk = 0;
    	}

        if (n & 1)
        {
            cout << 4 << "\n";
            cout << 1 << " " << n - 1 << "\n";
            cout << 1 << " " << n - 1 << "\n";
            cout << n - 1 << " " << n << "\n";
            cout << n - 1 << " " << n << "\n";
        }
        else
        {
            cout << 2 << "\n";
            cout << 1 << " " << n << "\n";
            cout << 1 << " " << n << "\n";
        }
    }
    return 0;
}