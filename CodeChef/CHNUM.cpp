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
    	int arr[n];
    	vector<int> arr1, arr2;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		if (arr[i] < 0) arr2.PB(arr[i]);
    		else arr1.PB(arr[i]);
    	}

    	if (arr1.size() == 0) cout << arr2.size() << " " << arr2.size() << "\n";
    	else if (arr2.size() == 0) cout << arr1.size() << " " << arr1.size() << "\n";
    	else if (arr1.size() > arr2.size()) cout << arr1.size() << " " << arr2.size() << "\n";
    	else cout << arr2.size() << " " << arr1.size() << "\n";

    }
    return 0;
}