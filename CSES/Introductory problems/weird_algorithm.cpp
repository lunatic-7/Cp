#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    ll n;
    cin >> n;
    
    cout << n << " ";
    while (n != 1)
    {
        if (n & 1)
        {
            n = (n*3) + 1;
            cout << n << " ";
        }
        else
        {
            n = (n / 2);
            cout << n << " ";
        }        
    }

    return 0;
}