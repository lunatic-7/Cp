#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void stat()
{
    int r1, w1, c1, r2, w2, c2;
    cin >> r1 >> w1 >> c1 >> r2 >> w2 >> c2;
    int cnt1 = 0;
    int cnt2 = 0;

    if (r1 > r2)
    {
        cnt1++;
    }
    else
    {
        cnt2++;
    }

    if (w1 > w2)
    {
        cnt1++;
    }
    else
    {
        cnt2++;
    }

    if (c1 > c2)
    {
        cnt1++;
    }
    else
    {
        cnt2++;
    }

    if (cnt1 > cnt2)
    {
        cout << 'A' << "\n";
    }
    else
    {
        cout << 'B' << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        stat();
    }
    
    return 0;
}