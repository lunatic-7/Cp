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

bool palinPerm(string s)
{
	unordered_map<char, int> palinct;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ') continue;
		char temp = s[i] | ' ';
		palinct[temp]++; 
	}

	int oddCt = 0;
	for (auto &x : palinct)
	{
		if (x.S & 1) oddCt++;
	}

	return oddCt < 2;
}

int main()
{
    wasif();
    string s = "Tact Coa";

    cout << palinPerm(s) << "\n";
    return 0;
}