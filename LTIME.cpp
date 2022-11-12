#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void lunch()
{
    int x;
    cin >> x;

    if (x >= 1 && x <= 4)
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
        lunch();
    }
       
    return 0;
}