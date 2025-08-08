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

    while(t--)
    {
    	string st;
    	cin >> st;
    	string cf = "codeforces";

        int cnt = 0;
    	for (int i = 0; i < cf.size(); ++i)
    	{
    		if (st[i] != cf[i]) cnt++;
    	}

    	cout << cnt << "\n";
    }
    return 0;
}