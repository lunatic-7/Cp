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


bool chk(int k, int mid)
{
	return (mid * 1LL * mid <= k);
}

int mySqrt(int x) 
{
	int left = 0, right = 46341;
	int ans = left;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (chk(x, mid))
		{
			ans = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}	    

	return ans;
}


int main()
{
    wasif();
    
    int x = 2147395600;
    cout << mySqrt(x) << "\n";

    return 0;
}