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
    int arr[7];

    for (int i = 0; i < 7; ++i)
    {
    	cin >> arr[i];
    }

    int sum = 0;
    int day = 0;
    while (sum < n)
    {
    	for (int i = 0; i < 7; ++i)
    	{
    		sum += arr[i];
    		day = i + 1;
    		if (sum >= n) break;
    	}
    }

    cout << day << "\n";
    return 0;
}