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

// O(n)
bool chkPermHash(string &a, string &b)
{
	if (a.size() != b.size()) return false;

	vector<int> ascii(128, 0);
	for (int i = 0; i < a.size(); ++i)
	{
		ascii[a[i]]++;
		ascii[b[i]]--;
	}

	for (int i = 0; i < ascii.size(); ++i)
	{
		if (ascii[i] != 0) return false;
	}

	return true;
}

// O(nlog(n))
bool chkPermSort(string a, string b)
{
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] != b[i]) return false;
	}

	return true;
}

int main()
{
    wasif();
    
    string a = "abdeda";
    string b = "abddae";

    cout << chkPermHash(a, b) << "\n";
    cout << chkPermSort(a, b) << "\n";

    return 0;
}