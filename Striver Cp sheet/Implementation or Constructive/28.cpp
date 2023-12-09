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
    string s, ans;
    cin >> s;
    char vowels[12] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    
    for (int i = 0; i < s.size(); ++i)
    {
    	int chk = 1;
    	for (int j = 0; j < 12; ++j)
    	{
    		if (s[i] == vowels[j])
    		{
    			chk = 0;
    			break;
    		}
    	}

    	if (chk)
    	{
    		ans.PB('.');
    		ans.PB(s[i] | ' ');
    	}
    }

    cout << ans << "\n";
    return 0;
}