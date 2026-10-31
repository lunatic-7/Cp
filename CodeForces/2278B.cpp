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
    	int x, y, z;
    	cin >> x >> y >> z;

    	map<int,char> mp;
    	mp[x] = 'P';
    	mp[y] = 'R';
    	mp[z] = 'S';

    	for (int i = 0; i < x + y + z; ++i)
    	{
    		cout << mp.rbegin()->S;
    	}
    	cout << "\n";
    }

    return 0;
}