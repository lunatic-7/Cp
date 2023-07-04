#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void revCont(int N)
{
    if (N == 0)
    {
        return;
    }
    
    cout << N << " ";
    N--;

    revCont(N);
}

void lcm()
{
    int N;
    cin >> N;

    revCont(N);
    cout << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        lcm();
    }
    
    return 0;
}