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

bool isSub(string s1, string s2)
{
	string x = "", y = "";
	for (int i = 0; i < s1.size(); ++i)
	{
		x += s1[i];
		y = s1.substr(i + 1, s1.size() - i);

		cout << x << " " << y << "\n";
		if (y + x == s2) return true;
	}

	return false;
}

int main()
{
    wasif();
    string s1 = "waterbottle", s2 = "erbottlewat";

    cout << isSub(s1, s2) << "\n";
    return 0;
}