// UNSOLVED
#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define PB push_back
#define POB pop_back
#define F first
#define S second
#define wasif() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int M = 1e9+7;
vector<int> g[2005];
int main()
{
    wasif();
    int emp;
    cin >> emp;
    
    for (int i = 1; i <= emp; ++i)
    {
    	int em;
    	cin >> em;
    	g[em].PB(i); 
    }

    for (auto x : g)
    {
    	for (auto y : x)
    	{
    		cout << y << " ";
    	}
    	cout << "\n";
    }
    return 0;
}