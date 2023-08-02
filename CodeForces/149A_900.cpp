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
    int k;
    cin >> k;
    int arr[12];
    for (int i = 0; i < 12; ++i)
    {
    	cin >> arr[i];
    }

    sort(arr, arr + 12, greater<int>());

    int i = 0, cnt = 0;
    while (k > 0 && i < 12)
    {
        k -= arr[i];
        i++;
        cnt++;
    }

    cout << (k > 0 ? -1 : cnt) << "\n";
    return 0;
}