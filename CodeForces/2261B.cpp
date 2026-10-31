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

    	vector<int> arr(n);
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    	}

    	int mini = arr[0], maxi = arr[0];
    	for (int i = 1; i < arr.size(); ++i)
    	{
    		mini = min(mini, arr[i]); 
    		maxi = max(maxi, arr[i]); 
    	}

    	// Get highest diff bit, because lower than that would be 1's at some point b/w mini and maxi
        int xorr = mini ^ maxi;

        // Get mask of highest bit set along with all lower bits set
        int mask = 0;
        while (xorr > 0)
        {
            mask = (mask << 1) | 1;
            xorr >>= 1;
        }

        cout << (maxi | mask) << "\n";
    }

    return 0;
}