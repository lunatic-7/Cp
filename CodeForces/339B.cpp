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
    int n, m;
    cin >> n >> m;

    int arr[m];
    for (int i = 0; i < m; ++i)
    {
    	cin >> arr[i];
    }

    ll time = 0;
    for (int i = 0; i < m; ++i)
    {
    	if (i == 0) time += arr[i] - 1;
    	else if (arr[i] < arr[i - 1])
    	{
    		int t1 = n - arr[i - 1];
    		int t2 = arr[i];
    		time += t1 + t2;
    	}
    	else time += arr[i] - arr[i - 1];
    }

    cout << time << "\n";
    return 0;
}	