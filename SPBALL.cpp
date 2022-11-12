// TLE
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

void ball()
{
    int n;
    cin >> n;
    int arr[n];
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 1)
        {
            sum += fact(arr[i]);
        }
        else
        {
            sum++;
        }
    }
    
    cout << sum % 1000000007 << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        ball();
    }
    
    return 0;
}