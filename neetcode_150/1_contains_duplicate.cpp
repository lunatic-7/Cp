#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    vector<int> nums = {1, 2, 3, 4};

    set<int> dupchk;
    for (int i = 0; i < nums.size(); ++i)
    {
    	dupchk.insert(nums[i]);
    }

    if (dupchk.size() == nums.size()) cout << "false" << "\n";
    else cout << "true" << "\n";

    return 0;
}