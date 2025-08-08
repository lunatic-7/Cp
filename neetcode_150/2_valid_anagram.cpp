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
    string s = "jar", t = "jam";

    vector<ll> ms(26, 0);

    for (int i = 0; i < s.size(); ++i)
    {
    	ms[(s[i] - '0') - 48]++;
    }

    for (int i = 0; i < t.size(); ++i)
    {
    	ms[(t[i] - '0') - 48]--;
    }

    bool ans = true;

    for (int i = 0; i < ms.size(); ++i)
    {
    	if (ms[i] != 0)
    	{
    		ans = false;
    		break;
    	}
    }

    return ans;
    
    return 0;
}