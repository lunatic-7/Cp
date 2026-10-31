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
    
    int t;
    cin >> t;
    while (t--)
    {
    	string s;
    	cin >> s;

    	int diff = 1;
    	int tp1 = 0, tp2 = 0;
    	for (int i = 1; i < s.size() - 1; ++i)
    	{
    		// 010 101
    		if ((s[i - 1] == s[i + 1]) && (s[i] != s[i - 1])) tp1 = 1;
    		if (s[i - 1] == s[i] && s[i] == s[i + 1]) tp2 = 1;
    	}

    	cout << diff + tp1 + tp2 << "\n";
    }

    return 0;
}