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
 

class Solution {
public:
	bool chkfreq(vector<int>& alpha, string s2, int left, int right)
	{
		for (int i = left; i <= right; ++i)
		{
			if (alpha[s2[i] - 'a'] != 0) return false; 
		}

		return true;
	}

    bool checkInclusion(string s1, string s2) {

    	// Edge case
    	if (s1.size() > s2.size()) return false;

    	// get count of all s1 chars 
    	vector<int> alpha(26, 0);
    	for (auto &x: s1)
    	{
    		alpha[x - 'a']++;
    	}

    	// create a window of size s1;
    	int i = 0, j = s1.size() - 1;
    	for (int i = 0; i <= j; ++i)
    	{
    		alpha[s2[i] - 'a']--;
    	}

    	if (chkfreq(alpha, s2, i, j)) return true;

    	while (j < s2.size() - 1)
    	{

    		j++;
    		alpha[s2[j] - 'a']--;
    		alpha[s2[i] - 'a']++;
    		i++;
    		
    		if (chkfreq(alpha, s2, i, j)) return true;
    	}

    	return false;
    }
};


int main()
{
    wasif();
    
    string s1 = "abc", s2 = "lecaabee";

    Solution sol;
    cout << sol.checkInclusion(s1, s2) << "\n";

    return 0;
}