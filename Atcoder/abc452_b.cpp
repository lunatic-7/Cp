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
    int h, w;
    cin >> h >> w;

    for (int i = 0; i < h; ++i)
    {
    	for (int j = 0; j < w; ++j)
    	{
    		if (i == 0 || i == h - 1 || j == 0 || j == w - 1) cout << "#";
    		else cout << ".";
    	}
    	cout << "\n";
    }

    return 0;
}