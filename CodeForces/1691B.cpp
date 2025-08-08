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
    	ll n;
    	cin >> n;

    	vector<ll> arr(n);

        map<ll,ll> count;
    	for (ll i = 0; i < n; ++i)
    	{
    		cin >> arr[i];
    		count[arr[i]]++;
    	}
        
        bool hoske = 1;
        for (auto x : count)
        {
        	if (x.S == 1)
        	{
        		hoske = 0;
        		break;
        	}
        }

        if (hoske)
        {
            ll ct = 0;
            ll point = 0;
            for (auto x : count)
            {
            	ct += x.S;
            	ll index = point;

            	for (int i = index + 1; i < ct; ++i)
            	{
            		cout << i + 1 << " ";
            		point++;
            	}
            	cout << index + 1 << " ";
            	point++;
            }
        	cout << "\n";
        }
        else cout << -1 << "\n";


    }
    return 0;
}