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

string comPress(string &s)
{
	string newStr = "";
	int ct = 1;
	for (int i = 1; i < s.size(); ++i)
	{
		if (s[i] == s[i - 1])
		{
			ct++;
		}
		else
		{
			newStr += s[i - 1] + to_string(ct);
			ct = 1;
		}

		if (i == s.size() - 1)
		{
			newStr += s[i] + to_string(ct);
		}
	}

	return (newStr.size() < s.size() ? newStr : s);
}

int main()
{
    wasif();
    string s = "abcd";

    string ans = comPress(s);
    cout << ans << "\n";
    return 0;
}