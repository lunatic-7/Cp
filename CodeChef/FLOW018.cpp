#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int fact(int N)
{
    // Base case
    if (N == 0 || N == 1)
    {
        return 1;
    }

    return N * fact(N - 1);
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        cout << fact(N) << "\n";
    }
    
    return 0;
}