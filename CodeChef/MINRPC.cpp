#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int winMove(char chefina, char chef)
{
	if (chefina == 'R' && chef == 'P') return 1;
	else if (chefina == 'P' && chef == 'S') return 1;
	else if (chefina == 'S' && chef == 'R') return 1;
	return 0;
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
    	string s;
    	cin >> s;
    	char chef[3] = {'R', 'P', 'S'};
    	string ans = " ";

    	int reqWins;
    	if (n == 1) reqWins = 1;
    	else if (n == 2) reqWins = 2;
    	else
    	{
    		reqWins = (n / 2) + 1;
    	}

    	int wins = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		// agr wins 0 hai, aur saare rounds jeetne hi hai
    		if (reqWins >= (n - i) + wins)
    		{
    			for (int j = 0; j < 3; ++j)
    			{
    				if (winMove(s[i], chef[j])) 
    				{
    					ans += chef[j];
    					wins++;
    				}
    			}
    		}
    		else
    		{
    			ans += chef[1]; // 'P'
    			if (winMove(s[i], chef[1])) wins++;
    		}
    	}

    	cout << ans << '\n';
    }
    return 0;
}