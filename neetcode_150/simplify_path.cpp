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
 

string simplifyPath(string path) {

	path += '/';
	string part_ans = "";
	stack<string> ans;
	for (int i = 0; i < path.size(); ++i)
	{
		if (path[i] == '/')
		{
			if (part_ans == ".." && !ans.empty()) ans.pop();
			else if (part_ans != "" && part_ans != "." && part_ans != "..") ans.push(part_ans);
			part_ans = "";
		}
		else part_ans += path[i];
	}

	stack<string> rev_ans;
	while (!ans.empty())
	{
		rev_ans.push(ans.top());
		ans.pop();
	}

	string answer = "/";
	while (!rev_ans.empty())
	{
		answer += rev_ans.top();
		if (rev_ans.size() != 1) answer += '/';
		rev_ans.pop();
	}

	return answer;
}
	
int main()
{
    wasif();
    string path = "/..//_home/a/b/..///";
    string ans = simplifyPath(path);

    cout << ans << "\n";

    return 0;
}