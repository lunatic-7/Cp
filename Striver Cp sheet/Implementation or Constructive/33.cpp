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
    int n, m;
    cin >> n >> m;

    int cnt = -1;
    if (m % n == 0) 
    {
    	int d = m / n;
    	cnt = 0;
    	while (d % 2 == 0)
    	{
    		d /= 2;
    		cnt++;
    	}
    	while (d % 3 == 0)
    	{
    		d /= 3;
    		cnt++;
    	}

    	if (d != 1) cnt = -1;   	
    }
    
    cout << cnt << "\n";
    return 0;
}