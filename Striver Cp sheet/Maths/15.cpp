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
    int k, r;
    cin >> k >> r;

    int i = 1;
    int ans = 1;
    while (1)
    {
    	if ((i * k) % 10 == 0) 
    	{
    		ans = i;
    		break;
    	}
    	if ((i * k) % 10 == r) 
    	{
    		ans = i;
    		break;
    	}	
    	i++;
    }

    cout << i << "\n";
    return 0;
}