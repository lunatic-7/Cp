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
    	string x;
    	cin >> x;

    	int chk = 0;
    	for (int i = 0; i < x.size(); ++i)
    	{
    		if (x[i] == '7') 
    		{
    			chk = 1;
    			break;    			
    		}
    	}

    	if (chk) cout << "YES\n";
    	else cout << "NO\n";
    }
    return 0;
}