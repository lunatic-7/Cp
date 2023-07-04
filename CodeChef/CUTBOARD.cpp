#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chess()
{
    int r, c;
    cin >> r >> c;

    int crows = (r + 1) - 4;
    int cclms = (c + 1) - 2;
    int tot = (crows * 2) + (cclms * 2) + (crows * (cclms - 2));

    cout << tot << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chess();
    }
    
    return 0;
}