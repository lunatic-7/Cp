#include <bits/stdc++.h>

using namespace std;
#define ll long long

void parity()
{
    int N, X;
    cin >> N >> X;

    if ((X <= N) && (X % 2 != 0))
    {
        cout << "YES" << "\n";
    }
    else if ((X <= N) && (X % 2 == 0))
    {
        if ((N - X) % 2 == 0)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
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
        parity();
    }

    return 0;
}