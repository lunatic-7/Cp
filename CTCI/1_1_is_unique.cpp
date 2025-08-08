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

// O(128)
bool isUniqueDs(string &s)
{
	// Agar saare char unique hai to 128 chars hi possible hai
	if (s.size() > 128) return false;

	vector<bool> ascii(128);
	for (int i = 0; i < s.size(); ++i)
	{
		if (ascii[s[i]]) return false;
		ascii[s[i]] = 1; 	
	}

	return true;
}

// O(nlogn)
bool isUniqueNods(string s)
{
	sort(s.begin(), s.end());

	for (int i = 0; i < s.size() - 1; ++i)
	{
		if (s[i] == s[i + 1]) return false;
	}

	return true;
}


int main()
{
    wasif();
    vector<string> ex = {"rat", "apple", "&nobr&", "motu"};

    for (auto &x : ex)
    {
    	bool ans = isUniqueDs(x);
    	cout << (ans ? x + " All unique" : x + " No") << "\n";
    }

    cout << "\n";

    for (auto &x : ex)
    {
    	bool ans = isUniqueNods(x);
    	cout << (ans ? x + " All unique" : x + " No") << "\n";
    }


    return 0;
}