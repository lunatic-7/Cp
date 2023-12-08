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
    	string pos;
    	cin >> pos;

    	for (char i = '1'; i <= '8'; ++i)
    	{
    		if (pos[1] == i) continue;
    		cout << pos[0] << i << "\n";
    	}

    	for (char i = 'a'; i <= 'h'; ++i)
    	{
    		if (pos[0] == i) continue;
    		cout << i << pos[1] << "\n";
    	}
    }
    return 0;
}