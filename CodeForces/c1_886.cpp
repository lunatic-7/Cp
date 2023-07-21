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
    while (n--)
    {
	    int arr[3];
	    for (int i = 0; i < 3; ++i)
	    {
	    	cin >> arr[i];
	    }

	    sort(arr, arr + 3);

	    if (arr[2] + arr[1] >= 10) cout << "YES" << "\n";
	    else cout << "NO" << "\n";    	
    }
    return 0;
}