#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << ' '; cout << '\n';}

const int M = 1e9+7;

int main()
{
    wasif();
    
    vector<vector<char>> board = {
    	{'1','2','.','.','3','.','.','.','.'},
		{'4','.','.','5','.','.','.','.','.'},
		{'.','9','8','.','.','.','.','.','3'},
		{'5','.','.','.','6','.','.','.','4'},
		{'.','.','.','8','.','3','.','.','5'},
		{'7','.','.','.','2','.','.','.','6'},
		{'.','.','.','.','.','.','2','.','.'},
		{'.','.','.','4','1','9','.','.','8'},
		{'.','.','.','.','8','.','.','7','9'}
	};

	unordered_map<int, set<char>> row, col;
	unordered_map<pair<int, int>, set<char>> square;

	for (int r = 0; r < 9; ++r)
	{
		for (int c = 0; c < 9; ++c)
		{
			if (board[r][c] == '.') continue;

			pair<int, int> temp_sq = {r / 3, c / 3};

			if (row[r].count(board[r][c]) || col[c].count(board[r][c]) || square[temp_sq].count(board[r][c]))
			{
				return false;
			}

			row[r].insert(board[r][c]);
			col[c].insert(board[r][c]);
			square[temp_sq].insert(board[r][c]);
		}
	}
	return true;


    return 0;
}