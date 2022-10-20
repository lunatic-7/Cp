// UNSOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif()                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void binar()
{
    int N;
    cin >> N;
    int arr[N];
    int score = 0;
    int i = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    while (i < N - 1)
    {
        if ((N - i >= 3) && (arr[i] == 1 && arr[i + 1] == 1 && arr[i + 2] == 1))
        {
            score++;
            i += 3;
        }
        else if ((arr[i] == 1 && arr[i + 1] == 0) || (arr[i] == 0 && arr[i + 1] == 1))
        {
            score++;
            i += 2;
        }
        else
        {
            i++;
        }
    }

    cout << score << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        binar();
    }

    return 0;
}