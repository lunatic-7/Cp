#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 100;
char arr[100][100];

int main()
{
    wasif();
    int T;
    cin >> T;
    while (T--)
    {
    	string ans;
    	for (int i = 0; i < 8; ++i)
    	{
    		for (int j = 0; j < 8; ++j)
    		{
    			cin >> arr[i][j];
    			if (arr[i][j] != '.') ans.PB(arr[i][j]);
    		}
    	}

    	cout << ans << "\n";
    }

    return 0;
}