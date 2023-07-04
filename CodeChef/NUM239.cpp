#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void beauty()
{
    int l, r;
    cin >> l >> r;
    int count = 0;

    for (int i = l; i <= r; i++)
    {
        if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
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
        beauty();
    }
    
    return 0;
}