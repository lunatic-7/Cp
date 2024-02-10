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
    	vector<int> prefix(n, 0), suffix(n, 0);
        set<char> st;

        // Prefix
        for (int i = 0; i < n; ++i)
        {
        	st.insert(s[i]);
        	prefix[i] = st.size();
        }
        st.clear();

        // Suffix
        for (int i = n - 1; i >= 0; --i)
        {
        	st.insert(s[i]);
        	suffix[i] = st.size();
        }

        int ans = 0, maxi = 0;
        for (int i = 0; i < n - 1; ++i)
        {
        	ans = prefix[i] + suffix[i + 1];
        	maxi = max(maxi, ans);
        }

    	cout << maxi << "\n";
    }

    return 0;
}