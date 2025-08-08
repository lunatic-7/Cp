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

vector<vector<int>> rotateMat(vector<vector<int>> mat)
{
	vector<vector<int>> ans = mat;
	int sz = mat.size() - 1;
	for (int i = 0; i < mat.size(); ++i)
	{
		for (int j = 0; j < mat[i].size(); ++j)
		{
			ans[j][sz - i] = mat[i][j];
		}
	}

	return ans;
}

int main()
{
    wasif();
    vector<vector<int>> mat = {
    	{1, 2, 3, 4},
    	{5, 6, 7, 8},
    	{9, 10, 11, 12},
    	{13, 14, 15, 16},
    };

    vector<vector<int>> ans = rotateMat(mat);

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