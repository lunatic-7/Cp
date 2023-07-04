#include <bits/stdc++.h>

using namespace std;
#define ll long long

void election()
{
    int votes[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> votes[i];
    }

    if (votes[0] < 51 && votes[1] < 51 && votes[2] < 51)
    {
        cout << "NOTA" << "\n";
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (votes[i] > 50)
            {
                if (i == 0)
                {
                    cout << 'A' << "\n";
                }
                else if (i == 1)
                {
                    cout << 'B' << "\n";
                }
                else
                {
                    cout << 'C' << "\n";
                }
            }
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
        election();
    }

    return 0;
}