#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void exam()
{
    int N, X, P;
    cin >> N >> X >> P;

    if (((N - X) * -1) + (X * 3) >= P)
    {
        cout << "PASS" << "\n";
    }
    else
    {
        cout << "FAIL" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        exam();
    }
    
    return 0;
}