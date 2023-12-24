#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
unordered_set<string> sst;

// UNSOLVED

void getCt(int n, string s, int i)
{
	if (s.size() == 0) return;
	sst.insert(s);
	string rm1 = s.substr(1, n);
	getCt(n, rm1, i + 1);
	// string rm2 = s.substr(1, 1) + s.substr(i + 1, n - i);
	// getCt(n, rm2, i + 1);
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;
    	int i = 1;

    	getCt(n, s, i);
    	for (auto x: sst)
    	{
    		cout << x << "\n";
    	}
    }
    return 0;
}