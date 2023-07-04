#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool cmp(int a, int b)
{
	return a > b;
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
    	int n, x;
    	cin >> n >> x;
    	int arr[n];

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	sort(arr, arr + n, cmp);
    	cout << arr[x - 1] - 1 << "\n";
    }
    return 0;
}