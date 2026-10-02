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
 

int minOperations(vector<string>& logs)
{
	stack<string> st;

	for (int i = 0; i < logs.size(); ++i)
	{
		if (logs[i] == "./") continue;
		else if (logs[i] == "../")
		{
			if (!st.empty()) st.pop();
		} 
		else st.push(logs[i]);
	}  

	return st.size();
}


int main()
{
    wasif();

    vector<string> logs = {"d1/","d2/","../","d21/","./"};
    cout << minOperations(logs) << "\n";

    return 0;
}