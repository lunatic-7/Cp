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
    	int n, m;
    	cin >> n >> m;

    	string a, b;
    	cin >> a >> b;

    	int i = 0, j = 0;

    	while (j < m)
    	{
    		if (a[i] == b[j])
    		{
    			i++;
    		}
    		j++;
    	}

    	cout << i << "\n";
    }
    return 0;
}