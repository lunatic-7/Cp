#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void thanks()
{
    int N;
    cin >> N;

    if (N < 10)
    {
        cout << "Thanks for helping Chef!" << "\n";
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
        thanks();
    }

    return 0;
}