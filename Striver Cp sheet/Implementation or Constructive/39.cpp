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
    string s;
    cin >> s;

    int cnt = 0, cnt2 = 0;
    int chk = 0;
    for (int i = 0; i < s.size(); ++i)
    {
    	if (isupper(s[i])) cnt++;
    }

    if (islower(s[0]))
    {
    	for (int i = 1; i < s.size(); ++i)
    	{
    		if (isupper(s[i])) cnt2++;
    	}
    }

    if (cnt == s.size()) chk = 1;
    if (cnt2 == s.size() - 1) chk = 1;

    if (chk)
    {
    	for (int i = 0; i < s.size(); ++i)
    	{
    		char temp;
    		if (isupper(s[i])) temp = s[i] | ' ';
    		if (islower(s[i])) temp = s[i] & '_';
    		cout << temp;
    	}
    }
    else cout << s << "\n";
    return 0;
}