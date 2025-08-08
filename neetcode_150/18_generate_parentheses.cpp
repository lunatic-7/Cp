#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

vector<string> valid;

void generate(string &s, int open, int close)
{
	if (open == 0 && close == 0)
	{
		valid.PB(s);
		return;
	}

	if (open > 0)
	{
		s.PB('(');
		generate(s, open - 1, close);
		// Backtracking
		s.POB();
	}

	if (close > 0)
	{
		if (open < close)
		{
			s.PB(')');
			generate(s, open, close - 1);
			// Backtracking
			s.POB();
		}
	}
}

vector<string> generateParenthesis(int n) {
 
	string s;
	generate(s, n, n);
	return valid;
}


int main()
{
    wasif();
    generateParenthesis(3);

    for (auto &x: valid)
    {
    	cout << x << " ";
    }

    return 0;
}