#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    wasif();
    ll l, b;
    cin >> l >> b;
    ll n;
    cin >> n;
    ll lrr[n], brr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> lrr[i] >> brr[i];
    }

    ll mats = 0;
    for (int i = 0; i < n; i++)
    {
        ll hall_area = 0;
        hall_area = max((lrr[i] / l) * (brr[i] / b), (lrr[i] / b) * (brr[i] / l));
        
        mats += hall_area ;
    }
    
    cout << mats << "\n";
    
    return 0;
}