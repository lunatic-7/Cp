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

vector<vector<int>> zero(vector<vector<int>> mat)
{
	int m = mat.size();
	int n = mat[0].size();
	vector<vector<int>> newMat = mat;

	for (int i = 0; i < mat.size(); ++i)
	{
		for (int j = 0; j < mat[i].size(); ++j)
		{
			if (mat[i][j] == 0)
			{
				// Row ke 0 kar
				for (int k = 0; k < m; ++k)
				{
					newMat[k][j] = 0;
				}

				// Column ke 0 kar
				for (int k = 0; k < n; ++k)
				{
					newMat[i][k] = 0;
				}
			}
		}
	}

	return newMat;
}

int main()
{
    wasif();
    vector<vector<int>> mat = {
    	{1, 2, 3, 4},
    	{4, 100, 5, 9},
    	{6, 7, 0, 10},
    };

    vector<vector<int>> ans = zero(mat);

    for (auto &x : ans)
    {
    	for (auto &y : x)
    	{
    		cout << y << " ";
    	}
    	cout << "\n";
    }
    return 0;
}