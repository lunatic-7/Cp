#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chess()
{
    int x;
    cin >> x;

    cout << (x * 60)/20 << "\n";
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