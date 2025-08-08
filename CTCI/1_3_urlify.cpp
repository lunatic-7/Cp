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

string urlify(string s)
{
	cout << s.size() << "\n";
	string ans = "";
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ') ans += "%20";
		else ans += s[i];
	}

	return ans;
}

int main()
{
    wasif();
    
    string s = "Mr John  Smith";

    cout << urlify(s) << "\n";
    return 0;
}