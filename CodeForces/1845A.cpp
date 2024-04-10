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
    	int n, k, x;
    	cin >> n >> k >> x;

    	if (k == 1) cout << "NO" << "\n";
        else if (k == 2 && x == 1 && (n & 1)) cout << "NO" << "\n";
        else if (x != 1)
        {
        	cout << "YES" << "\n";
        	cout << n << "\n";
        	for (int i = 0; i < n; ++i)
        	{
        		cout << 1 << " ";
        	}
        	cout << "\n";
        }
        else
        {
        	int temp = 0;
        	if (n % 2 == 0) 
        	{
        		temp = n / 2;
        		cout << "YES" << "\n";
	    		cout << temp << "\n";
	    		for (int i = 0; i < temp; i++)
	    		{
	    			cout << 2 << " ";
	    		}
	    		cout << "\n";

        	}
        	else
        	{
        		temp = (n / 2) - 1;
        		cout << "YES" << "\n";
        		cout << temp + 1 << "\n";
        		for (int i = 0; i < temp; i++)
	    		{
	    			cout << 2 << " ";
	    		}
	    		cout << 3 << "\n";
        	} 
        }
    }

    return 0;
}