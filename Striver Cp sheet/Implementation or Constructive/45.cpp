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

        int chk = 0;
    	for (int i = 0; i < n / 2; ++i)
    	{
    		if (s[i] == s[(n-1) - i]) chk = 1;
    		else if (static_cast<char>(s[i] + 1) == static_cast<char>(s[(n - 1) - i] - 1)) chk = 1;
    		else if (static_cast<char>(s[i] - 1) == static_cast<char>(s[(n - 1) - i] + 1)) chk = 1;
    		else 
    		{
    			chk = 0;
    			break;
    		}
    	}

    	cout << (chk ? "YES" : "NO") << "\n";
    }
    return 0;
}