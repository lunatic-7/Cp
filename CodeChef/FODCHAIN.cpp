#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void energy()
{
    ll E, K;
    cin >> E >> K;
    int count = 0;

    while (E > 0)
    {
        E = E / K;
        count++;
    }
    
    cout << count << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        energy();
    }
    
    return 0;
}