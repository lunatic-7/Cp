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
 

int solve(int &a, int &b)
{
	if (b > a + 1) return -1;
	if (((a & 1) && (b & 1)) || (!(a & 1) && !(b & 1))) return a;
	return a + 1;
}

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int a, b;
    	cin >> a >> b;

    	cout << solve(a, b) << "\n";
    }

    return 0;
}