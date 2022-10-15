#include <bits/stdc++.h>

using namespace std;
#define ll long long

void zeroOnes()
{
    int N;
    cin >> N;
    string s;
    if (n > 2)
    {
        if (N % 2 == 0)
        {
            s += "1";
            for (int i = 1; i < N - 1; i++)
                s += "0";
            s += "1";
        }
        else
        {
            for (int i = 1; i < (N + 1) / 2; i++)
                s += "0";
            s += "1";
            for (int i = (N + 1) / 2; i < N; i++)
                s += "0";
        }
    }

    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        zeroOnes();
    }

    return 0;
}