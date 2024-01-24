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

    sort(arr, arr + n, greater<int>());

    int five = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == 5) five++;
    }

    if (five == n) cout << -1 << "\n";
    else if (five >= 9)
    {
        int lptime = five / 9;
        for (int i = 0; i < lptime * 9; ++i)
        {
            cout << 5;
        }
        for (int i = 0; i < n - five; ++i)
        {
            cout << 0;
        }
    }
    else cout << 0 << "\n";
    
    return 0;
}