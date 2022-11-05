#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void shoes()
{
    int N, M;
    cin >> N >> M;

    if (M <= N)
    {
        cout << (N * 2) - M << "\n";
    }
    else if (M > N)
    {
        cout << N << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        shoes();
    }
    
    return 0;
}