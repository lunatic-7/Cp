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
    int T;
    cin >> T;

    while (T--)
    {
    	int n, cnt = 0;
    	cin >> n;

    	while (n > 1)
    	{
    		if (n % 6 == 0)
    		{
    			n /= 6;
    			cnt++;
    		} 
    		else if (n % 3 == 0) 
    		{
    			n *= 2;
    			cnt++;
    		}
    		else
    		{
    			cnt = -1;
    			break;
    		}
    	}

    	cout << (cnt != -1 ? cnt : -1) << "\n";
    }
    return 0;
}