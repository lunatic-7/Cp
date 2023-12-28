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
    	char arr[3][3];
    	int qmark_i, qmark_j;

    	for (int i = 0; i < 3; ++i)
    	{
    		for (int j = 0; j < 3; ++j)
    		{
    			cin >> arr[i][j];
    			if (arr[i][j] == '?')
    			{
    				qmark_i = i;
    				qmark_j = j;
    			}
    		}
    	}


	    bool C = true, A = true, B = true;
	    for (int i = 0; i < 3; ++i)
	    {
	    	if (arr[qmark_i][i] == 'A') A = false;
	    	if (arr[qmark_i][i] == 'B') B = false;
	    	if (arr[qmark_i][i] == 'C') C = false;
	    }

	    if (C) cout << "C" << "\n";
	    else if (B) cout << "B" << "\n";
	    else if (A) cout << "A" << "\n";
    }

    return 0;
}