#include <bits/stdc++.h>

using namespace std;
#define ll long long

void kitchen()
{
    int N;
    cin >> N;
    int slot[N];
    int time[N];
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> slot[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> time[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
            if (time[i] <= slot[i])
            {
                sum += 1;
            }
        }
        else
        {
            if (time[i] <= (slot[i] - slot[i - 1]))
            {
                sum += 1;
            }
        }
    }

    cout << sum << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;

    while (T--)
    {
        kitchen();
    }

    return 0;
}