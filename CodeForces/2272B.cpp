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

    	char frog[2][n];
    	for (int i = 0; i < 2; ++i)
    	{
    		for (int j = 0; j < n; ++j)
    		{
    			cin >> frog[i][j];
    		}
    	}

    	// count frog in both row of a column
    	int ct = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (frog[0][i] == frog[1][i]) ct++;
    	}

    	cout << (((n - ct) & 1) ? 1 : 0) << "\n";
    }

    return 0;
}