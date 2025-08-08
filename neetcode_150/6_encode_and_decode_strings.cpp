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
    vector<string> strs = {""};

    cout << strs.size() << "\n";
    string en = "";
    for (int i = 0; i < strs.size(); ++i)
    {
    	en += strs[i];
    	en += '@';
    }


    vector<string> ans;

    string temp = "";
    for (int i = 0; i < en.size(); ++i)
    {
    	if (en[i] == '@')
    	{
    		ans.PB(temp);
    		temp = "";
    	}
    	else
    	{
    		temp += en[i];
    	}
    }

    // return ans ? ans.size() > 1 : "";

    return 0;
}