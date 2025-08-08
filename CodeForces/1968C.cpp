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

// UPSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	vector<int> x(n - 1); // 2 4 1
    	for (int i = 0; i < n - 1; ++i)
    	{
    		cin >> x[i];
    	}

        vector<int> ans;
        ans.PB(x[n - 2]);
        ans.PB(1e9);

        for (int i = n - 3; i >= 0; --i)
        {
            ans.PB(ans.back() - x[i]);
        }

        reverse(ans.begin(), ans.end());

    	showVect(ans);
    }
    return 0;
}