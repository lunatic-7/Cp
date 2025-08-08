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

bool oneAway(string &s1, string &s2)
{
	string a = s1.size() >= s2.size() ? s1 : s2;
	string b = s1.size() < s2.size() ? s1 : s2;

	int lena = a.size();
	int lenb = b.size();

	int i = 0, j = 0;

	bool flag = false;
	while (i < lena && j < lenb)
	{
		// 1 se zyda ka size the diff hua to automatically false ho jyga
		if (lena - lenb > 1) return false;

		if (a[i] != b[j])
		{
			// Iska mtlb 2 mismatch hogye agr flag true hai
			if (flag) return false;
			else
			{
				if (lena > lenb) i++;
				else i++, j++;
			}
			flag = true;
		}
		i++, j++;
	}

	return true;
}

int main()
{
    wasif();
    string s1 = "pale", s2 = "pales";

    bool ans = oneAway(s1, s2);
    cout << ans << "\n";
    return 0;
}