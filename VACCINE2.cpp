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
    	int n, d;
    	cin >> n >> d;
    	int arr[n];

    	double risk = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] >= 80 || arr[i] <= 9) risk++;
    	}

    	int days = ceil(risk / (double) d) + ceil((n - risk) / (double) d);
    	cout << days << "\n";
    }
    return 0;
}