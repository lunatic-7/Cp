#include <bits/stdc++.h>

using namespace std;
#define ll long long

int onOff()
{
    int N;
    cin >> N;
    string S;
    string R;
    int toggle = 1;

    cin >> S;
    cin >> R;

    for (int i = 0; i < N; i++)
    {
        if (S[i] != R[i])
        {
            if (toggle == 1)
            {
                toggle = 0;
            }
            else
            {
                toggle = 1;
            }
        }
    }

    return toggle;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        cout << onOff() << "\n";
    }
    return 0;
}