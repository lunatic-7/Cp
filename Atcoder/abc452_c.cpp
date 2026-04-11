#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void showVect(vector<int> a) {for(auto it : a) cout << it << " "; cout << "\n";}
void showVectll(vector<ll> a) {for(auto it : a) cout << it << " "; cout << "\n";}
 
const int M = 1e9+7;
 
int main()
{
    wasif();
    int n;
    cin >> n;

    vector<pair<int, int>> ab;
    for (int i = 0; i < n; ++i)
    {
    	int a, b;
    	cin >> a >> b;
    	ab.PB({a, b});
    }

    int m;
    cin >> m;

    vector<string> s;
    for (int i = 0; i < m; ++i)
    {
    	string temp;
    	cin >> temp;
    	s.PB(temp);
    }

    // for (auto &x: ab)
    // {
    // 	cout << x.F << " " << x.S << "\n";
    // }

    int sp = 0;
    while (m--)  // har ek haddi ke liye
    {
    	string spine = s[sp];

    	int chk = 0;
    	string testtt;
    	for (int i = 0; i < n; ++i)  // har ek n
    	{
    		bool haddiChk = 0;
    		for (int k = 0; k < s.size(); ++k)  // har ek haddi pe chk (m)
    		{
    			if ((s[k].size() == ab[i].F) && (s[k][ab[i].S - 1] == spine[i]))
    			{
    				// cout << s[k][ab[i].S - 1] << " " << spine[i] << "\n";
    				haddiChk = 1;
    				testtt = s[k];
    				break;
    			}
    		}
    		cout << testtt << "\n";
    		if (haddiChk) chk++;
    	}

    	cout << chk << "\n";

    	cout << (chk == spine.size() ? "Yes" : "No") << "\n";
    	sp++;
    }



    return 0;
}