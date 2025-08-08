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
    	string a, b;
    	cin >> a >> b;

    	// All subsets of a and b and consider max length common
    	set<string> st;
    	set<string> answala;

    	for (int i = 0; i < a.size(); ++i)
    	{
    		for (int j = 0; j <= a.size(); ++j)
    		{
    			string temp = a.substr(i, j);
    			st.insert(temp);
    		}
    	}

    	for (int i = 0; i < b.size(); ++i)
    	{
    		for (int j = 0; j <= b.size(); ++j)
    		{
    			string temp = b.substr(i, j);
    			if (st.find(temp) != st.end()) answala.insert(temp);
    		}
    	}

        string ans = "";
        int maxi = 0;
    	for (auto x : answala)
    	{
    		if (x.size() > maxi)
    		{
    			maxi = x.size();
    			ans = x;
    		}
    	}

    	int finalans = a.size() + b.size() - (2 * ans.size());
    	cout << finalans << "\n";
    }
    return 0;
}