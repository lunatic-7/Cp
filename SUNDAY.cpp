#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void holiday()
{
    int n;
    cin >> n;
    int arr[n];
    int holiday[31] = {0};
    int sat = 6;
    int sun = 7;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 1; i <= n; i++)
    {
        holiday[arr[i]] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (i == sat)
        {
            holiday[i] = 1;
            sat += 7;
        }
        if (i == sun)
        {
            holiday[i] = 1;
            sun += 7;
        }
    }

    for (int i = 1; i <= 30; i++)
    {
        if (holiday[i] == 1)
        {
            count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        holiday();
    }
    
    return 0;
}