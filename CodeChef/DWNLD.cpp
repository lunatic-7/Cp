#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void broad()
{
    int n, k;
    cin >> n >> k;
    int charge = 0;

    while (n--)
    {
        int t, d;
        cin >> t >> d;

        while (k > 0 && t > 0)
        {
            t--;
            k--;
        }
        
        charge += t * d;
    }
    
    cout << charge << "\n";
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        broad();
    }
    
    return 0;
}