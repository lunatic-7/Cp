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
    int T;
    cin >> T;

    while (T--)
    {
    	int n;
    	cin >> n;
    	string s;
    	cin >> s;

    	int cn0 = 0, cn1 = 0;

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (s[i] == '0') cn0++;
    		else cn1++;
    	}

    	if (cn0 >= cn1) cout << s.size() - cn0 << "\n";
    	else cout << s.size() - cn1 + 1 << "\n";
    }
    return 0;
}