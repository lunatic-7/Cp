#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void ali()
{
    int n, k;
    cin >> n >> k;
    int temp;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > k)
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
        ali();
    }
    
    return 0;
}