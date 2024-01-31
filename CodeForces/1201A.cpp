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
    int n, m;
    cin >> n >> m;

    char arr[n][m];

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < m; ++j)
    	{
    		cin >> arr[i][j];
    	}
    }

    int marks[m];
    for (int i = 0; i < m; ++i)
    {
    	cin >> marks[i];
    }

    ll final_ans = 0;
    for (int i = 0; i < m; ++i)
    {
    	unordered_map<char, int> ans;
    	int cnt = 0;
    	for (int j = 0; j < n; ++j)
    	{
    		ans[arr[j][i]]++;
    	}

    	for (auto x : ans)
    	{
    		if (x.S > cnt) cnt = x.S;
    	}
    	final_ans += cnt * marks[i];
    }

    cout << final_ans << "\n";
    return 0;
}