#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

bool chkV(char c)
{
	char vow[2] = {'a', 'e'};
	for (int i = 0; i < 2; ++i)
	{
		if (c == vow[i]) return true;
	}
	return false;
}

bool chkC(char c)
{
	char con[3] = {'b', 'c', 'd'};
	for (int i = 0; i < 3; ++i)
	{
		if (c == con[i]) return true;
	}
	return false;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	vector<string> ans;

    	string s;
    	cin >> s;

    	int i = 0, popSZ = 0; 
    	string st = " ";
    	while(1)
    	{
    		if (i > n - 2) break;

    		// chk for CV
    		string cv = s.substr(i, 2);

    		if (n - i != 3)
    		{
	    		if (st != cv)
	    		{
		    		if (chkC(cv[0]) && chkV(cv[1]))
		    		{
		    			ans.PB(cv);
		    			i+=2;
		    			popSZ = cv.size();
		    			st = " ";
		    			continue;
		    		}
	    		}    			
    		}

    		if (i < n - 2) 
    		{
	    		string cvc = s.substr(i, 3);
	    		if (st != cvc)
	    		{
	    			// cout << st << " " << cvc << "\n";
		    		if (chkC(cvc[0]) && chkV(cvc[1]) && chkC(cvc[2]))
		    		{
		    			ans.PB(cvc);
		    			i+=3;
		    			popSZ = cvc.size();
		    			st = " ";
		    		}    			
		    		else
		    		{
		    			st = ans[ans.size() - 1];
		    			ans.POB();
		    			i-=popSZ;
		    		}
	    		}    			
    		}
    	}

    	for (int i = 0; i < ans.size(); ++i)
    	{
    		cout << ans[i];
    		if (i != ans.size() - 1) cout << ".";

    	}
    	cout << "\n";
    }
    return 0;
}