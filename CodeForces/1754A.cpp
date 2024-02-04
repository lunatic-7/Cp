#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

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
    	int chk = 0;
    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == 'Q') chk++;
    		else if (s[i] == 'A' && chk > 0) chk--;
    	}

    	if (chk == 0) cout << "Yes" << "\n";
    	else cout << "No" << "\n";
    }

    return 0;
}