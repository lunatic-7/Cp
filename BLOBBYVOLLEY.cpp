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
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;

    	int ap = 0, bp = 0;
    	bool A = true, B = false;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (A)
    		{
    			if (s[i] == 'A')
    			{
    				ap++;
    			}
    			else
    			{
    				B = !B;
    				A = !A;
    			}
    		}
    		else if (B)
    		{
    			if (s[i] == 'B')
    			{
    				bp++;
    			}
    			else
    			{
    				A = !A;
    				B = !B;
    			}
    		}
    	}

    	cout << ap << " " << bp << "\n";
    }
    return 0;
}