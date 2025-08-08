#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

// SEEN
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

    	vector<int> alpha(26, 0);
    	ll moves = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		if (!alpha[s[i] - '0' - 49])
    		{
    			alpha[s[i] - '0' - 49]++;
    			moves += n - i;
    		}
    	}
    	cout << moves << "\n";
    }
    return 0;
}