#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Logic

// let arr is 1 2 3 4 5 6 7 8 9
// Already sorted no problem, else sort, as we sort, we know
// next element from the selected elem will always be greater
// eg: 3 > 2, but the issue comes at last digit 9, as 8 + 1 == 9
// So, swap(8, 9), Now check for this case.

int main()
{
    wasif();
    int n;
    cin >> n;

    ll arr[n];

    for (int i = 0; i < n; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr, arr + n);
    if (arr[n - 1] >= (arr[n - 2] + arr[n - 3])) cout << "NO" << "\n";
    else
    {
    	cout << "YES" << "\n";
    	swap(arr[n - 1], arr[n - 2]);
    	for (auto x : arr) cout << x << " ";
    }

    return 0;
}