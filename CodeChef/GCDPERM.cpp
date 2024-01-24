#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

void pAns(ll n, ll k)
{
	ll num = n / k;
   	for (int i = num; i <= n; i+=num)
   	{
    	   cout << i << " ";
   	}
   	cout << "\n";
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	ll n, k;
    	cin >> n >> k;

    	ll newN = n - (n % k);
    	pAns(newN, k);
    }
    
    return 0;
}