#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 

vector<int> dailyTemperatures(vector<int>& temperatures) {
    
    vector<int> ans;
    for (int i = 0; i < temperatures.size(); ++i)
    {
    	bool chk = 1;
    	for (int j = i; j < temperatures.size(); ++j)
    	{
    		if (temperatures[j] > temperatures[i])
    		{
    			ans.PB(j - i);
    			chk = 0;
    			break;
    		}
    	}
    	if (chk) ans.PB(0);
    }

    return ans;
}


vector<int> betterDailyTemperatures(vector<int>& temperatures) {
    
    vector<int> ans(temperatures.size(), 0);
    stack<pair<int, int>> st; // {temp, index}

    for (int i = 0; i < temperatures.size(); ++i)
    {
    	while (!st.empty() && temperatures[i] > st.top().F)
    	{
    		ans[st.top().S] = i - st.top().S;
    		st.pop();
    	}
    	st.push({temperatures[i], i});
    }

    return ans;
}

int main()
{
    wasif();
    vector<int> temperatures = {30, 38, 30, 36, 35, 40, 28};
    showVect(betterDailyTemperatures(temperatures));

    return 0;
}