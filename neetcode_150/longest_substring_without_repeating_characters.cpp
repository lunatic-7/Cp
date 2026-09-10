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


int lengthOfLongestSubstring(string s) {
    
    unordered_map<char, int> char_ind;
    int sz = 0, maxi = 0, danda = 0;

    for (int i = 0; i < s.size(); ++i)
    {
    	if (char_ind[s[i]] && danda < char_ind[s[i]]) 
		{
			sz = i - (char_ind[s[i]] - 1);
			danda = char_ind[s[i]];
		}
    	else sz++;
    	
    	char_ind[s[i]] = i + 1;  // 1 based indexing
    	maxi = max(maxi, sz);
    }

    return maxi;
}

int main()
{
    wasif();
    string s = "abba";
    cout << lengthOfLongestSubstring(s) << "\n";

    return 0;
}