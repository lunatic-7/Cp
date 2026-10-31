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
 

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        // Find Peak index
        // if no peak found it means our peak is last index
        int peak = arr.size() - 1;
        for (int i = 0; i < arr.size() - 1; ++i)
        {
        	if (abs(arr[i + 1] - x) > abs(arr[i] - x))
        	{
        		peak = i;
        		break;
        	}
        	else if (abs(arr[i + 1] - x) == abs(arr[i] - x))
        	{
        		if (arr[i] < arr[i + 1]) peak = i;
        		break;
        	}
        }

        vector<int> ans;
        ans.PB(arr[peak]);
        k--;

        int i = peak, j = peak;
        while (k--)
        {
        	if (i - 1 < 0)
        	{
        		ans.PB(arr[j + 1]);
        		j++;
        	}
        	else if (j + 1 >= arr.size())
        	{
        		ans.PB(arr[i - 1]);
        		i--;
        	}
        	else
        	{
        		if (abs(arr[i - 1] - x) <= abs(arr[j + 1] - x))
        		{
        			ans.PB(arr[i - 1]);
        			i--;
        		}
        		else
        		{
        			ans.PB(arr[j + 1]);
        			j++;
        		}
        	}
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{
    wasif();
    Solution sol;

    vector<int> arr = {2, 4, 5, 8};
    int k = 2;
    int x = 6;
    showVect(sol.findClosestElements(arr, k, x));

    return 0;
}