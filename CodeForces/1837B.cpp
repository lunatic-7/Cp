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
    int t;
    cin >> t;

    while (t--)
    {
    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	int k = 1, maxi = 1;
    	for (int i = 0; i < s.size() - 1; ++i)
    	{
    		if (s[i] == s[i + 1]) k++;
    		else k = 1;
    		maxi = max(maxi, k);
    	}
    	

    	cout << 1 + maxi << "\n";
    }
    return 0;
}