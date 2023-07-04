#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void infect()
{
    int N, A;
    cin >> N >> A;

    if (A < N - A)
    {
        cout << A << "\n";
    }
    else
    {
        cout << N - A << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        infect();
    }
    
    return 0;
}