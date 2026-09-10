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
 
int guessNumber(int n) 
{
	int left = 1, right = n;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		int res = guess(mid);
		if (res == 0) return mid;
		else if (res == -1) right = mid - 1;
		else left = mid + 1;
	}

	return left;
}

int main()
{
    wasif();
    

    return 0;
}