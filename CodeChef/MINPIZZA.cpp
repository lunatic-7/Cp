#include <bits/stdc++.h>

using namespace std;
#define ll long long

void pizza()
{
    float N, X;
    cin >> N >> X;

    cout << ceil((N*X)/4) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;

    while (T--)
    {
        pizza();
    }
    
    return 0;
}