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
    int matrix[6][6];

    int row, column;

    for (int i = 1; i <= 5; ++i)
    {
    	for (int j = 1; j <= 5; ++j)
    	{
    		cin >> matrix[i][j];
    		if (matrix[i][j] == 1)
    		{
    			row = i;
    			column = j;
    		}
    	}
    }

    cout << abs(3 - row) + abs(3 - column);

    return 0;
}