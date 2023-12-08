#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;

// UNSOLVED

int main()
{
    wasif();
    int t;
    cin >> t;

    while (t--)
    {
    	string s;
    	cin >> s;
    	int up_ind = -1, lo_ind = -1;

    	int ind = 0;
    	while (1)
    	{
    		if (isupper(s[ind]) && s[ind] != 'B') up_ind = ind;
    		if (islower(s[ind]) && s[ind] != 'b') lo_ind = ind;
    		
    		cout << "ind: " << ind << "\n";
    		cout << "lo: " << lo_ind << "\n";
    		if (up_ind != -1 && s[ind] == 'B')
    		{
    			s.erase(up_ind, 1);
    			if (ind - 1 >= 0) s.erase(ind - 1, 1);
    			ind = 0;
    			cout << s << "\n";
    			// cout << s[0] << "\n";
    			up_ind = -1;
    		}
    		if (lo_ind != -1 && s[ind] == 'b')
    		{
    			s.erase(lo_ind, 1);
    			if (ind - 1 >= 0) s.erase(ind - 1, 1);
    			ind = 0;
    			cout << s << "\n";
    			// cout << s[0] << "\n";
    			lo_ind = -1;
    		}
    		else ind++;
    		
    		if (ind >= s.size()) break;
    	}

    	cout << s << "\n";
    }
    return 0;
}