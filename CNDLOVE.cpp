#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void toffee()
{
    int N;
    cin >> N;
    int temp;
    int total = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        total += temp;
    }

    if (total > 3 && total % 2 != 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        toffee();
    }
    
    return 0;
}