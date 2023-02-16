#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

int main()
{
    wasif();
    int k, n;
    cin >> k >> n;

    vector<string> vl;
    vector<string> vc;

    for (int i = 0; i < k; ++i)
    {
    	string lucky;
    	cin >> lucky;
    	vl.PB(lucky);
    }

    for (int i = 0; i < n; ++i)
    {
    	string check;
    	cin >> check;
    	vc.PB(check);
    }

    for (int i = 0; i < vl.size(); ++i)
    {
    	for (int j = 0; j < vc.size(); ++j)
    	{
    		while (vc.size() > vl.size())
    		{
    			
    		}
    	}
    }

    for (auto &y: vc)
    {
    	cout << y << "\n";
    }
    return 0;
}