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
vector<pair<int, int>> fest = {{1, 7}, {3, 3}, {5, 5}, {7, 7}, {9, 9}}; 

int main()
{
    wasif();
    int m, d;
    cin >> m >> d;

    bool chk = 0;
    for (auto &x: fest)
    {
    	if (x.F == m && x.S == d)
    	{
    		chk = 1;
    		break;
    	}
    }

    cout << (chk ? "Yes" : "No") << "\n";

    return 0;
}