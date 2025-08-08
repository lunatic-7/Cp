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
    string s = "10P01";
    string cr_st = "";

    for (int i = 0; i < s.size(); ++i)
    {
    	if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
    	{
    		char lo = s[i] | ' ';
    		cr_st += lo;
    	}
    }

    int i = 0, j = cr_st.size() - 1;

    bool ans = true;
    while (i < j)
    { 
        if (cr_st[i] != cr_st[j])
        {
        	ans = false;
        	break;
        }

        i++;
        j--;
    }

    cout << ans << "\n";
    return 0;
}