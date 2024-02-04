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
    	int n;
    	cin >> n;

    	if (n == 1) cout << 2 << "\n";
    	else
    	{
    		int ini_move = n / 3;
    		int final_move = n % 3;
    		if (final_move != 0) ini_move++;

            cout << ini_move << "\n";    	
    	}
    }
    return 0;
}