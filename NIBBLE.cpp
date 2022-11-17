#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void nib()
{
    int n;
    cin >> n;

    if (n % 4 == 0)
    {
        cout << "GOOD" << "\n";
    }
    else
    {
        cout << "NOT GOOD" << "\n";
    }
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        nib();
    }
    
    return 0;
}