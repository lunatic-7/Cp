#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define mod 1000000007
#define PB push_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    int n;
    cin >> n;

    // Sorting an array
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    // sorting partially
    // sort(arr + 2, arr + n);
    // sort(arr, arr + 3);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Sorting a vector
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());

    // sorting partially
    // sort(v.begin() + 2, v.end());
    // sort(v.begin(), v.end() - 2);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}