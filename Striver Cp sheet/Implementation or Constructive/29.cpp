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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	int count = 2 * n;
    	int arr[count];

    	for (int i = 0; i < count; ++i)
    	{
    		cin >> arr[i];
    	}

    	sort(arr, arr + count);

    	int mid0 = arr[count/2 - 1], mid1 = arr[(count/2 + 1) - 1];
    	cout << mid1 - mid0 << "\n";
    }
    return 0;
}