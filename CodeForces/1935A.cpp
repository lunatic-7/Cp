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

    	string s, sr;
    	cin >> s;

    	sr = s;
    	reverse(sr.begin(), sr.end());

    	int chksm = 1; // for 1st, 0 for last;
    	int i = 0, j = s.size() - 1;
    	while (i < j)
    	{
    	    if (s[j] - '0' < s[i] - '0') 
    	    {
    	    	chksm = 0;
    	    	break;
    	    }
    	    else if (s[i] - '0' < s[j] - '0')
    	    {
    	    	chksm = 1;
    	    	break;
    	    }
    	    i++;
    	    j--;
    	}

    	if (chksm) cout << s << "\n";
    	else cout << sr + s << "\n";
    }
    return 0;
}