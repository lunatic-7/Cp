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
        int arr[4];
        for (int i = 0; i < 4; ++i)
        {
          	cin >> arr[i];
        }  

        int bias = 0;
        for (int i = 0; i < 4; ++i)
        {
        	if (arr[i] > arr[i + 1]) bias += arr[i];
        	else bias += arr[i + 1];
        	i++;
        }

        int real = 0;
        sort(arr, arr + 4);
        real += arr[3];
        real += arr[2];

        if (bias == real) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}