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

    set<char> bg;

    for (int i = 0; i < s.size(); ++i)
    {
    	bg.insert(s[i]);
    }

    if (bg.size() & 1) cout << "IGNORE HIM!" << "\n";
    else cout << "CHAT WITH HER!" << "\n";
    return 0;
}