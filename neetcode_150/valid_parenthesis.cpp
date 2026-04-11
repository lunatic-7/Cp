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
 

bool isValid(string s) {
    
    stack<char> par;
    bool chk = 1;
    for (int i = 0; i < s.size(); ++i)
    {
    	if (s[i] == '(' || s[i] == '{' || s[i] == '[') par.push(s[i]);
    	else if (!par.empty() && ((s[i] == ')') && (par.top() == '(') || (s[i] == '}') && (par.top() == '{') || (s[i] == ']') && (par.top() == '['))) par.pop();
    	else 
    	{
    		chk = 0;
    		break;
    	}
    }

    if (par.size()) chk = 0;
    return chk;
}

int main()
{
    wasif();
    string s = "[({})]";
    cout << isValid(s);

    return 0;
}