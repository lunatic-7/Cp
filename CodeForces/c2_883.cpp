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

    while(T--)
    {
    	char tictac[3][3];
    	char s = '.';

    	for (int i = 0; i < 3; ++i)
    	{
    		for (int j = 0; j < 3; ++j)
    		{
    			cin >> tictac[i][j];
    		}
    	}

    	for (int i = 0; i < 3; ++i)
    	{
    		int j = 0;
    		if (tictac[i][j] != '.' && tictac[i][j + 1] != '.' && tictac[i][j + 2] != '.')
    		{
        		// Check for rows
	    		if ((tictac[i][j] == tictac[i][j + 1] && tictac[i][j + 1] == tictac[i][j + 2] && tictac[i][j + 2] == tictac[i][j]))
	    		{
	    			s = tictac[i][j];
	    			break;
	    		}

    		}

    		if (tictac[j][i] != '.' && tictac[j + 1][i] != '.' && tictac[j + 2][i] != '.')
    		{
		    	// Check for columns
		    	if ((tictac[j][i] == tictac[j + 1][i] && tictac[j + 1][i] == tictac[j + 2][i] && tictac[j + 2][i] == tictac[j][i]))
		    	{
		    		s = tictac[j][i];
		    		break;
		    	}
    		}
    	}


    	if (tictac[0][0] != '.' && tictac[1][1] != '.' && tictac[2][2] != '.')
    	{
		   	// Check for diagonal 1
		    if ((tictac[0][0] == tictac[1][1] && tictac[1][1] == tictac[2][2] && tictac[2][2] == tictac[0][0]))
		    {
		    	s = tictac[0][0];
		    }
       	}	

       	if (tictac[0][2] != '.' && tictac[1][1] != '.' && tictac[2][0] != '.')
    	{
		   	// Check for diagonal 2
		    if ((tictac[0][2] == tictac[1][1] && tictac[1][1] == tictac[2][0] && tictac[2][0] == tictac[0][2]))
		    {
		    	s = tictac[0][2];
		    }
       	}	

    	if (s == '.') cout << "DRAW" << "\n";
    	else cout << s << "\n";
    }
    return 0;
}