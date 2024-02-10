#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// WRONG ANSWER

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;
    	vector<int> hp(n), bdha(n);

    	ll time = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> hp[i];
    		time += hp[i];
    	}

    	ll maxi = 0, temp = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		cin >> bdha[i];
            if (i != 0 && i != n - 1) temp = bdha[i] * 2;
            else temp = bdha[i];

    		maxi = max(maxi, temp);
    		time += temp;
    	}

    	cout << time - maxi << "\n";
    }
    return 0;
}