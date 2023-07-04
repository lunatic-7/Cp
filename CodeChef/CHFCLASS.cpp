#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void chutti()
{
    ll n;
    cin >> n;
    if (n % 7 == 6)
	{
	    cout << (n / 7) + 1 << "\n";
	}
	else
	{
	    cout << (n / 7) << "\n";
	}
}

int main()
{
    wasif();
    int T;
    cin >> T;

    while (T--)
    {
        chutti();
    }
    
    return 0;
}