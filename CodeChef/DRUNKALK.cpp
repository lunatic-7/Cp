#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void alcoholic()
{
    int k;
    cin >> k;

    if (k % 2 != 0)
    {
        cout << k + 2 << "\n";
    }
    else
    {
        cout << k << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        alcoholic();
    }
        
    return 0;
}