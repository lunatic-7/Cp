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
    int n;
    cin >> n;

    while (n--)
    {
    	int mhr, sumi;
    	cin >> mhr >> sumi;

    	int quot = sumi / mhr;
    	int remain = sumi % mhr;
    	ll ans = 0;

    	for (int i = 0; i < mhr; ++i)
    	{
    	 	if (remain)
    	 	{
    	 		ans += (quot + 1) * (quot + 1);
    	 		remain--;
    	 	}
    	 	else
    	 	{
    	 		ans += quot * quot;
    	 	}
    	} 

    	cout << ans << "\n";
    }
    return 0;
}