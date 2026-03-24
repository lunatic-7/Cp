#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
const int N = 1e3+10;

ll prefixArray[N][N];
 

class NumMatrix {
private:
	vector<vector<int>> matrix;

public:
    NumMatrix(vector<vector<int>>& matrix) {
    	this->matrix = matrix;
    }

	// Precomputation
	void twoDPrefix(vector<vector<int>> matrix)
	{
		int row = matrix.size();
		int col = matrix[0].size();

		for (int i = 1; i <= row; ++i)
		{
			for (int j = 1; j <= col; ++j)
			{
				prefixArray[i][j] = matrix[i - 1][j - 1] + prefixArray[i - 1][j] + prefixArray[i][j - 1] - prefixArray[i -1][j - 1];
			}
		}
	}
    
    int sumRegion(int row1, int col1, int row2, int col2) {

    	twoDPrefix(matrix);

    	int ans = prefixArray[row2 + 1][col2 + 1] - prefixArray[(row1 + 1) - 1][col2 + 1] - prefixArray[row2 + 1][(col1 + 1) - 1] + prefixArray[(row1 + 1) - 1][(col1 + 1) - 1];
    	return ans;
    }


};

int main()
{
    wasif();

	vector<vector<int>> matrix = {
		{3, 0, 1, 4, 2},
		{5, 6, 3, 2, 1},
		{1, 2, 0, 1, 5},
		{4, 1, 0, 1, 7},
		{1, 0, 3, 0, 5}
	};

    NumMatrix *obj = new NumMatrix(matrix);
 	int param_1 = obj->sumRegion(2, 1, 4, 3);

 	cout << param_1 << "\n";

    return 0;
}