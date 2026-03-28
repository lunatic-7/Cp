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


int cAB(int robo, vector<int> &kaata, string str)
{
    int l = 0, r = kaata.size() - 1;
    int ans = INT_MAX;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (kaata[mid] < robo)
        {
        	if (str == "before") ans = robo - kaata[mid];
            l = mid + 1;
        }
        else
        {
        	if (str == "after") ans = kaata[mid] - robo;;
            r = mid - 1;
        }
    }
    return ans;
}


// int cA(int robo, vector<int> &kaata)
// {
//     int l = 0, r = kaata.size() - 1;
//     int ans = INT_MAX;

//     while (l <= r)
//     {
//         int mid = (l + r) / 2;
//         if (kaata[mid] >= robo)
//         {
//             ans = kaata[mid] - robo;
//             r = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     return ans;
// }


int main()
{
    wasif();
    int t;
    cin >> t;
    
    while (t--)
    {
    	int n, m, k;
    	cin >> n >> m >> k;

    	vector<int> robo(n), kaata(m);

    	// Robot
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> robo[i];
    	}

    	// Kaate
    	for (int i = 0; i < m; ++i)
    	{
    		cin >> kaata[i];
    	}


    	string moves;  // k size ka
    	cin >> moves;

    	vector<pair<int, int>> bef_aft;
    	set<pair<int, int>> before, after;

    	sort(kaata.begin(), kaata.end()); // because we will implementing binary search on it

    	// Calculating before and after kaata from a robo
		for (int i = 0; i < robo.size(); ++i)
		{
    		int bf = cAB(robo[i], kaata, "before");
    		int af = cAB(robo[i], kaata, "after");

    		before.insert({bf, i});
    		after.insert({af, i});
    		bef_aft.PB({bf, af});
		}


    	int ans = n;
    	int mv_ct = 0;
    	for (int i = 0; i < k; ++i)
    	{
    		if (moves[i] == 'R') mv_ct++;
    		else mv_ct--;
  
  			if (mv_ct > 0)
  			{
  				while (!after.empty() && abs(mv_ct) >= after.begin()->F)
				{
					auto j = after.begin()->S;
					after.erase(after.begin());
					before.erase(before.find({bef_aft[j].F, j}));  // pair find krna hai
					ans--;
				}
  			}
    		else
    		{
    			while (!before.empty() && abs(mv_ct) >= before.begin()->F)
    			{
					auto j = before.begin()->S;  // Getting robot's index
					before.erase(before.begin());  // Next iterator ye already de rha hai
					after.erase(after.find({bef_aft[j].S, j}));  // pair find krna hai
					ans--;
    			}
    		}

    		cout << ans << " ";
    	}

    	cout << "\n";
    }

    return 0;
}