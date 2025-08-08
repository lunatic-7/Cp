#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}

const int M = 1e9+7;

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int x;
    	cin >> x;

        int ind = 0, ans = 0;
    	for (int i = 1; i < x; ++i)
    	{
    		if ((__gcd(x, i) + i) > ans)
    		{
    			ans = __gcd(x, i) + i;
    			ind = i;
    		}
    	}

    	cout << ind << "\n";
    }
    return 0;
}