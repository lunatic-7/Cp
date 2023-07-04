#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void guard()
{
    int a, b;
    cin >> a >> b;

    cout << max(a, b) << " " << a + b << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        guard();
    }
    
    return 0;
}