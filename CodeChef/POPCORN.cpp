#include <bits/stdc++.h>

using namespace std;
#define ll long long

void combo()
{
    int a1, a2, b1, b2, c1, c2;
    int comb1, comb2, comb3;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;

    comb1 = a1 + a2;
    comb2 = b1 + b2;
    comb3 = c1 + c2;

    if (comb1 >= comb2)
    {
        if (comb1 >= comb3)
        {
            cout << comb1 << "\n";
        }
        else
        {
            cout << comb3 << "\n";
        }
    }
    else if (comb2 >= comb1)
    {
        if (comb2 >= comb3)
        {
            cout << comb2 << "\n";
        }
        else
        {
            cout << comb3 << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        combo();
    }

    return 0;
}