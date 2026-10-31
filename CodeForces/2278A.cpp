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
    	int n, m;
    	cin >> n >> m;

    	string num, den;
    	cin >> num >> den;

    	vector<int> alpha(26, 0);

    	if (den.size() > num.size() - 3) cout << "NO" << "\n";
    	else
    	{
    		// numerator
    		for (int i = 0; i < num.size(); ++i)
    		{
    			// cout << num[i] << "\n";
    			alpha[num[i] - 'a']++;
    		}

    		// denominator
    		for (int i = 0; i < den.size(); ++i)
    		{
    			alpha[den[i] - 'a']--;
    		}

    		// all elem in alpha should be 0 except s i x should be 1
    		bool flag = 1;
    		int s = 's' - 'a';
    		int i = 'i' - 'a';
    		int x = 'x' - 'a';
    		for (int k = 0; k < alpha.size(); ++k)
    		{
    			if (k == s || k == i || k == x)
    			{
    				if (alpha[k] != 1) flag = 0;
    			}
    			else if (alpha[k] != 0) flag = 0; 
    		}

    		cout << (flag == 1 ? "YES" : "NO") << "\n";
    	}
    }

    return 0;
}