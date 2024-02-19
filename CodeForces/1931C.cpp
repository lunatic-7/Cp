#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// Upsolved

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	int arr[n];
    	
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        int left = 0, leftC = 0, right = n - 1, rightC = 0;

        while (left < n && arr[left] == arr[0])
        {
            left++;
            leftC++;
        }

        while (right >= 0 && arr[right] == arr[n - 1])
        {
            right--;
            rightC++;
        }

        if (arr[0] == arr[n - 1]) cout << max(0, n - (leftC + rightC)) << "\n";
        else cout << min(n - rightC, n - leftC) << "\n";
    }
    return 0;
}