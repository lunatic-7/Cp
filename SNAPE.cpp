#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void bls()
{
    float b, ls;
    cin >> b >> ls;
    float srs = sqrt(pow(ls, 2) - pow(b, 2));
    float brs = sqrt(pow(ls, 2) + pow(b, 2));
    cout << srs << " " << brs << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        bls();
    }
    
    return 0;
}