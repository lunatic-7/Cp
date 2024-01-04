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
    	ll color[4], oddCt = 0;
    	bool zeroCt = false;
    	
    	for (int i = 0; i < 4; ++i)
    	{
    		cin >> color[i];
    		if (color[i] & 1) oddCt++;
    		if (i < 3 && color[i] == 0) zeroCt = true;
    	}

    	if (oddCt == 2) cout << "No" << "\n";
    	else if (oddCt == 3 && zeroCt) cout << "No" << "\n";
    	else cout << "Yes" << "\n";
    }
    return 0;
}