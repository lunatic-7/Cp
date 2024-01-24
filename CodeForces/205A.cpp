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
    vector <int> v(n);

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }
    copy(arr, arr + n, v.begin());

    sort(arr, arr + n);
    if (arr[0] == arr[1]) cout << "Still Rozdil" << "\n";
    else 
    {
    	for (int i = 0; i < v.size(); ++i)
    	{
    		if (v[i] == arr[0])
    		{
    			cout << i + 1 << "\n";
    			break;
    		}
    	}
    }

    return 0;
}