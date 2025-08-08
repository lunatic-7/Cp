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
    	int n;
    	cin >> n;

        map<int,int> mp;
        int num = 10, val = 10;
        for (int i = 1; i <= 5; ++i)
        {
            mp[pow(num, i)] = val + ((i - 1) * 9);
        }

        // for (auto x : mp)
        // {
        //     cout << x.F << " " << x.S << "\n";
        // }

    	int ans = 0;
        if (n <= 10) ans = n;
        else
        {
            string s = to_string(n);
            int sz = pow(10, s.size() - 1);
            if (s[0] == '1') ans = mp[sz];
            else ans = mp[sz] + ((s[0] - '0') - 1);
        }

        cout << ans << "\n";
    }
    return 0;
}