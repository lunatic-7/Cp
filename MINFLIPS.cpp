#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void zero()
{
    int n;
    cin >> n;
    int c1 = 0;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == -1)
        {
            c1++;
        }
    }

    if (n % 2 == 0)
    {
	    cout << abs(c1 - (n / 2)) << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        zero();
    }
    
    return 0;
}