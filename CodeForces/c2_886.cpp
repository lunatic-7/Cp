#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
const int N = 50;
int arr[N];

int main()
{
    wasif();
    int T;
    cin >> T;
    while (T--)
    {
    	int n;
    	cin >> n;
    	set<pair<int, int>> resp;

    	for (int i = 0; i < n; ++i)
    	{
    		int x, y;
    		cin >> x >> y;
    		arr[y] = i;
    		pair<int, int> temp;
    		temp = {y, x};
    		resp.insert(temp);
    	}

    	int bada = 0;
    	for (auto ans: resp)
    	{
    		if (ans.F > bada && ans.S <= 10) bada = ans.F;
    	}

    	cout << arr[bada] + 1 << "\n";
    }
    return 0;
}