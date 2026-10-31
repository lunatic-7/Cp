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
    	int n, k;
    	cin >> n >> k;

    	vector<int> arr(n);
    	// num and count of that num
    	map<int, int> mp;

    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		mp[arr[i]]++;
    	}

    	// by default all mex 0
    	vector<bool> mex(101, 0);

    	// set all which pair we can form with min elems;
    	int carry = 0;

    	for (auto &x: mp)
    	{
    		if (x.S + carry >= k)
    		{
    			mex[x.F] = 1;
    			carry = x.S + carry - k;
    		}
    		else carry += x.S;
    	}


    	int mex_ans = 0;
    	for (int i = 0; i < mex.size(); ++i)
    	{
    		if (!mex[i])
    		{
    			mex_ans = i;
    			break;
    		} 
    	}

    	cout << mex_ans << "\n";
    }

    return 0;
}