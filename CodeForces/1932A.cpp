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

    	int coins = 0;
    	for (int i = 0; i < n; ++i)
    	{
    		if (s[i] == '@') coins++;
    		else if (i < n - 1 && s[i] == '*' && s[i + 1] == '*') break;
    	}

    	cout << coins << '\n';
    }  
    return 0;
}