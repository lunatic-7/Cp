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
 

int characterReplacement(string s, int k) 
{
	// See sliding window main feature, expand R till valid, when invalid shrink L until valid
	int l = 0, r = 0;
	int max_freq = 0, max_substr = 0;
	unordered_map<char, int> ump;

	while(r < s.size())
	{
		int window_size = (r - l) + 1;
		ump[s[r]]++;
		max_freq = max(max_freq, ump[s[r]]);

		while (window_size - max_freq > k)
		{
			ump[s[l]]--;
			l++;
			window_size = (r - l) + 1;
		}


		r++;
		max_substr = max(max_substr, window_size);
	}

	return max_substr;
}


int main()
{
    wasif();
    
    string s = "AAABABB";
    int k = 1;
    cout << characterReplacement(s, k) << "\n";

    return 0;
}