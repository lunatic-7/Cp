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
    	int n;
    	cin >> n;

    	string s;
    	cin >> s;

    	int sz = s.size();
    	int i = 0, j = sz - 1;

    	while (i < j)
    	{
    		if (s[i] != s[j])
    		{
                sz -= 2;
                i++;
                j--;
    		}
    		else break;
    	}

    	cout << sz << "\n";
    }
    return 0;
}