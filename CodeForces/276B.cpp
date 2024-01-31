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

    unordered_map<char, ll> st;

    for (int i = 0; i < s.size(); ++i)
    {
    	st[s[i]]++;
    }

    int oddCt = 0, evenCt = 0;
    for (auto x : st)
    {
    	if (x.S & 1) oddCt++;
    	// cout << x.F << " " << x.S << "\n";
    }
    evenCt = st.size() - oddCt;


    if (oddCt == 0 || oddCt == 1) cout << "First" << "\n";
    else if (evenCt)
    {
    	oddCt++;
        if (oddCt & 1) cout << "Second" << "\n";
        else cout << "First" << "\n";
    }
    else cout << "Second" << "\n";

    return 0;
}