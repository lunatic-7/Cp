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
    	string ab;
    	cin >> ab;

    	int sz_b = ab.size() / 2;
    	string a, b;
       
        while (sz_b > 0)
        {
    		if (ab[sz_b] != '0')
    		{
    			if (stoi(ab.substr(0, sz_b)) < stoi(ab.substr(sz_b)))
    			{
	    			a = ab.substr(0, sz_b);
	    			b = ab.substr(sz_b);    				
    				break;
    			}
    			else sz_b--;
    		}
    		else sz_b--;
        }  

        if (!a.empty()) cout << a << " " << b << "\n";
        else cout << -1 << "\n";
    }
    return 0;
}