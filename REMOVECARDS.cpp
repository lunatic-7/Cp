#include <bits/stdc++.h>

using namespace std;
#define ll long long

void cards()
{
    int N;
    cin >> N;
    int a[N];

    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a, a + N);

    int maxi = 1;
    int sw = 1;
    for (int i = 0; i < N - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            sw++;
            maxi = max(maxi, sw);
        }
        else
        {
            sw = 1;
        }
    }

    cout << N - maxi << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        cards();
    }

    return 0;
}