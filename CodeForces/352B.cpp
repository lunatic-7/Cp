#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

const int N = 1e5+7;
vector<vector<int>> seq(N);
map<int, int> ans;

int main()
{
    wasif();
    int n, x, lim = -1;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        lim = max(lim, x);
        seq[x].PB(i);
    }

    bool flag = true;
    for (int i = 0; i <= lim; ++i)
    {
        flag = true;
        if (seq[i].size() == 0) continue;
        if (seq[i].size() == 1) ans[i] = 0;
        else if (seq[i].size() == 2) ans[i] = seq[i][1] - seq[i][0]; 
        else
        {
            for (int j = 2; j < seq[i].size() && flag; ++j)
            {
                if (seq[i][j] - seq[i][j - 1] != seq[i][j - 1] - seq[i][j - 2])
                {
                    flag = false;
                    break;
                }
            }
            if (flag) ans[i] = seq[i][1] - seq[i][0];
        }
    }

    cout << ans.size() << "\n";
    for (auto aaa : ans)
    {
        cout << aaa.F << " " << aaa.S << "\n";
    }

    return 0;
}