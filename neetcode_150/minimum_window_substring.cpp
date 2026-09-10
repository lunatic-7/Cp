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
 

string minWindow(string s, string t) 
{
	int s_sz = s.size();
	int t_sz = t.size();
	
	// get ct of values of t in map
	map<char, int> t_ct;
	for (int i = 0; i < t.size(); ++i)
	{
		t_ct[t[i]]++;
	}

	int i = 0, j = 0;
	int ct = 0;
	int shortest_sz = INT_MAX;
	int starting_ind = -1;
	while (j < s_sz)
	{
		if (t_ct[s[j]] > 0) ct++;
		t_ct[s[j]]--;

		while (ct == t_sz)
		{
			cout << i << " " << j << " " << ct << "\n";
			if (j - i + 1 < shortest_sz)
			{
				starting_ind = i;
				shortest_sz = j - i + 1;
			}
			
			t_ct[s[i]]++;
			if (t_ct[s[i]] > 0) ct--; 
			i++;
		}
		
		j++;
	}

	return (starting_ind == -1 ? "" : s.substr(starting_ind, shortest_sz));
}

int main()
{
    wasif();
    string s = "OUZODYXAZV", t = "XYZ";
    cout << minWindow(s, t) << "\n";

    return 0;
}