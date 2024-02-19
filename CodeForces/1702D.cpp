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
    	string s, temp;
    	cin >> s;
    	temp = s;
    	int p;
    	cin >> p;

    	int tot = 0;
    	vector<int> hsh(27, 0);
    	sort(temp.begin(), temp.end());

    	for (int i = 0; i < temp.size(); ++i)
    	{
    		tot += (temp[i] - 96);
    		if (tot > p) break;
    		hsh[temp[i] - 96]++;
    	}

    	for (int i = 0; i < s.size(); ++i)
    	{
    		if (hsh[s[i] - 96])
    		{
    			cout << s[i];
    			hsh[s[i] - 96]--;
    		}
    	}
    	cout << "\n";
    }
    
    return 0;
}