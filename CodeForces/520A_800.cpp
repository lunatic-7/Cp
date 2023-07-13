#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
set<char> st;

int main()
{
    wasif();
    int n, chk;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ++i)
    {
    	s[i] = s[i] | ' ';
    	st.insert(s[i]);	
    }

    if (st.size() == 26) cout << "YES" << "\n";
    else cout << "NO" << "\n";

    return 0;
}