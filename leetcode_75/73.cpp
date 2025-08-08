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

int main()
{
    wasif();
    
    vector<vector<int>> matrix = {
    	{0, 1, 2, 0},
    	{3, 4, 5, 2},
    	{1, 3, 6, 5}
    };


    vector<pair<int, int>> rc;
    int m, n;
    m = matrix.size();

    for (int i = 0; i < matrix.size(); ++i)
    {
    	for (int j = 0; j < matrix[i].size(); ++j)
    	{
    		n = matrix[i].size();
    		if (matrix[i][j] == 0) rc.PB({i, j});
    	}
    }

    for (auto &x : rc)
    {
    	// ROW
    	for (int i = 0; i < m; ++i)
    	{
    		matrix[i][x.S] = 0;
    	}

    	// COL
    	for (int i = 0; i < n; ++i)
    	{
    		matrix[x.F][i] = 0;
    	}
    }


    // Printing Matrix
    for (int i = 0; i < matrix.size(); ++i)
    {
    	for (int j = 0; j < matrix[i].size(); ++j)
    	{
    		cout << matrix[i][j] << " ";
    	}
    	cout << "\n";
    }

    return 0;
}