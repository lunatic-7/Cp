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
    int t;
    cin >> t;

    while (t--)
    {
    	vector<int> timur(4);
    	for (int i = 0; i < 4; ++i)
    	{
    		cin >> timur[i];
    	}

    	int a = timur[0], ans = -1;

    	sort(timur.begin(), timur.end(), greater<int>());

    	for (int i = 0; i < 4; ++i)
    	{
    		if (timur[i] == a) ans = i;
    	}

    	cout << ans << '\n'; 
    }
    return 0;
}