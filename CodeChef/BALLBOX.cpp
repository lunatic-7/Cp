#include <bits/stdc++.h>

using namespace std;
#define ll long long

void validBox()
{
    int N, K;

    int sum = 0;
    cin >> N >> K;

    for (int i = 1; i <= K; i++)
    {
        sum += i;
    }

    if (N >= sum)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
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
        validBox();
    }
    return 0;
}