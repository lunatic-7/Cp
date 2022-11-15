#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sub()
{
    double n, x;
    cin >> n >> x;

    cout << ceil(n/6) * x << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        sub();
    }
    
    return 0;
}