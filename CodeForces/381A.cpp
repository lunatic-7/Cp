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
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    int x = 1, sareja = 0, dima = 0, k = 0, m = n - 1;
    while (k <= m)
    {
    	if (arr[k] > arr[m])
    	{
    		if (x == 1) sareja += arr[k];
    		else dima += arr[k];
    		k++;
    		x ^= 1;
    	}
    	else
    	{
    		if (x == 1) sareja += arr[m];
    		else dima += arr[m];
    		m--;
    		x ^= 1;
    	}
    }

    cout << sareja << " " << dima << "\n";
    return 0;
}