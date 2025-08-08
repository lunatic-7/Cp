#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int query(int x, int y)
{
    cout << "? " << x << " " << y << endl;
    int response;
    cin >> response;
    return response;
}

void answer(vector<int>& x)
{
	cout << "! ";
    for (auto i : x)
    {
    	cout << i << " ";
    }
}

int main()
{
	wasif();

	int moves;
	cin >> moves;

	vector<int> ans, temp;
	int i = 1, j = 2;

	while (j < 4)
	{
		int response = query(i, j);
		temp.PB(response);
		if (temp.size() == 2)
		{
			response = query(1, 3);
			temp.PB(response);
			moves--;
		}
		i++, j++;
		moves--;
	}

	// for 3rd no z
	ans.PB(temp[2] - temp[0]);
	// for 2nd no y
	ans.PB(temp[1] - ans[0]);
	// for 1st no x
	ans.PB(temp[0] - ans[1]);

	reverse(ans.begin(), ans.end());

	while (moves--)
	{
		int sz = ans.size();
		int response = query(i, j);
		ans.PB(response - ans[sz - 1]);
		i++, j++;
	}

	answer(ans);

    return 0;
}