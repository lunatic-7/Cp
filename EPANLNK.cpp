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
    int T;
    cin >> T;

    while (T--)
    {
    	string n;
    	cin >> n;
    	string two;
    	if (n.size() > 1)
    	{
    		for (int i = n.size() - 2; i < n.size(); ++i)
    		{
    			two += n[i];
    		}
    	}
    	else two = n[n.size() - 1];
    	int ans = stoi(two);
    	cout << ans % 20 << "\n";

    }
    return 0;
}