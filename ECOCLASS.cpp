#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void eco()
{
    int N;
    cin >> N;
    int S[N], D[N];
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> D[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (S[i] == D[i])
        {
            count++;
        }
    }

    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        eco();
    }
    
    return 0;
}