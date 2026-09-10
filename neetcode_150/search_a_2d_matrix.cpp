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
 

vector<int> simplifyOd(vector<vector<int>>& matrix)
{
	int col = matrix.size(), row = matrix[0].size();
	vector<int> simplifiedV;
	for (int i = 0; i < col; ++i)
    {
    	for (int j = 0; j < row; ++j)
		{
			simplifiedV.PB(matrix[i][j]);
		}
    }

    return simplifiedV;
} 

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
	int col = matrix.size(), row = matrix[0].size();
	vector<int> onedmat = simplifyOd(matrix);

	int left = 0, right = col * row - 1;
	
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (onedmat[mid] == target) return 1;
		else if (onedmat[mid] > target) right = mid - 1;
		else left = mid + 1;
	}

	return 0;
}


int main()
{
    wasif();
    vector<vector<int>> matrix = {
    	{1, 2, 4, 8},
    	{10, 11, 12, 13},
    	{14, 20, 30, 40}
    };

    int target = 122;

    cout << searchMatrix(matrix, target) << "\n";

    return 0;
}