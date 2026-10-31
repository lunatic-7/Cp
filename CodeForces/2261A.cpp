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
    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	int ct1 = count(s.begin(), s.end(), '1');
    	int f1 = 0, f2 = 0;
    	
    	if (ct1 == 1) cout << 0 << "\n";
    	else if (ct1 == 2) cout << 1 << "\n";
    	else
    	{
    		for (int i = 0; i < s.size(); ++i)
    		{
    			if ((s[i] == '1') && f1 == 0) f1 = i + 1;
    			if ((s[n - i - 1] == '1') && f2 == 0) f2 = n - i;

    			if (f1 && f2) break;
    		}
    		
    		cout << f2 - f1 << "\n";
    	}
    }

    return 0;
}