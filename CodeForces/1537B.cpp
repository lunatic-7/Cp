#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n, m, i, j;
    	cin >> n >> m >> i >> j;

    	pair<int, int> ans1, ans2;
        // boundary
        if (i == 1)
        {
        	ans1 = {n, 1};
        	ans2 = {n, m};
        }
        else if (i == n)
        {
        	ans1 = {1, 1};
        	ans2 = {1, m};
        }
        else if (j == 1)
        {
        	ans1 = {1, m};
        	ans2 = {n, m};
        }
        else if (j == m)
        {
        	ans1 = {1, 1};
        	ans2 = {n, 1};
        }
        else 
        {
        	ans1 = {1, 1};
        	ans2 = {n, m};
        }

        cout << ans1.F << " " << ans1.S << " ";
        cout << ans2.F << " " << ans2.S << "\n";
    }
    return 0;
}