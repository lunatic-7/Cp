#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 
int main()
{
    wasif();
    int q;
    cin >> q;

    while (q--)
    {
    	int n;
    	cin >> n;

    	string s, t;
    	cin >> s >> t;

    	vector<int> chk(26, 0);

    	for (int i = 0; i < s.size(); ++i)
    	{
    		chk[s[i] - 'a']++;   // a = 97
    	}
    	
    	for (int i = 0; i < t.size(); ++i)
    	{
    		chk[t[i] - 'a']--;
    	}

    	bool ans = 1;
    	for (int i = 0; i < 26; ++i)
    	{
    		if (chk[i])
    		{
    			ans = 0;
    			break;
    		}
    	}

    	cout << (ans ? "YES" : "NO") << "\n";
    }

    return 0;
}