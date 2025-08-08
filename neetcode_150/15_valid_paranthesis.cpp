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

bool isValid(string s) {
        
	stack<char> st;
	unordered_map<char,char> match = {
		{']', '['},
		{'}', '{'},
		{')', '('},
	};

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '[' || s[i] == '{' || s[i] == '(')
		{
			st.push(s[i]);
		}
		else if (!st.empty() && (match[s[i]] == st.top())) 
		{
			cout << match[s[i]] << " " << s[i] << "\n";
			st.pop();
		}
		else return false;
	}

	return st.empty();
}

int main()
{
    wasif();
    string s = ")";

    cout << isValid(s) << "\n";
    return 0;
}