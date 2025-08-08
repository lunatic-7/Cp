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
    string str1, str2;
    cin >> str1 >> str2;

    set<string> to_chk;
    int k = 1;
    bool chk = 0;
    while (k <= str1.size())
    {
    	if (str1.size() % k == 0)
    	{
	    	string temp = str1.substr(0,k);
	    	for (int i = 0; i < str1.size(); i+=k)
	    	{
	    		if (temp == str1.substr(i, k)) chk = 1;
	    		else
	    		{
	    			chk = 0;
	    			break;
	    		}
	    	}
    		if (chk) to_chk.insert(temp);
    	}

    	k++;
    }

    string ans = "";
    k = 1;
    while (k <= str2.size())
    {
    	if (str2.size() % k == 0)
    	{
	    	string temp = str2.substr(0,k);
	    	for (int i = 0; i < str2.size(); i+=k)
	    	{
	    		if (temp == str2.substr(i, k)) chk = 1;
	    		else
	    		{
	    			chk = 0;
	    			break;
	    		}
	    	}
    		if (chk)
    		{
    			auto it = to_chk.find(temp);
    			if (it != to_chk.end() && temp.size() > ans.size()) ans = temp;
    		}
    	}

    	k++;
    }

    cout << ans << "\n";

    return 0;
}