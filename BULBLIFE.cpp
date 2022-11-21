#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bulb()
{
    int n, x;
    cin >> n >> x;
    int temp, sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> temp;
        sum += temp;
    }

    if ((x * n) - sum > 0)
    {
        cout << (x * n) - sum << "\n";
    }
    else
    {
        cout << 0 << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bulb();
    }
    
    return 0;
}